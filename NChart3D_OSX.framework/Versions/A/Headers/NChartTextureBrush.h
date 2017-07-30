/**
 * This file is the part of NChart3D Framework
 * http://www.nchart3d.com
 *
 * File: NChartTextureBrush.h
 * Version: "2.9.1"
 *
 * Copyright (C) 2017 Nulana LTD. All Rights Reserved.
 */

#import "NChartBrush.h"


/**
 * The NChartTextureBrush class provides the brush that fills the area with a texture (aka image).
 */
NCHART3D_EXPORT @interface NChartTextureBrush : NChartBrush

/**
 * Create brush with image.
 *
 * @param image - image for the brush.
 * @return a new instance of the texture brush.
 */
+ (NChartTextureBrush *)textureBrushWithImage:(NSImage *)image;

/**
 * Create brush with image, background color and position of texture.
 *
 * @param image - image for the brush.
 * @param color - background color for the brush.
 * @param position - position for the texture.
 * @return a new instance of the texture brush.
 */
+ (NChartTextureBrush *)textureBrushWithImage:(NSImage *)image backgroundColor:(NSColor *)color position:(NChartTexturePosition)position;

/**
 * Init brush with image.
 *
 * @param image - image for the brush.
 * @return the initialized instance of a brush.
 */
- (id)initWithImage:(NSImage *)image;

/**
 * Init brush with image, background color and position of texture.
 *
 * @param image - image for the brush.
 * @param color - background color for the brush.
 * @param position - position for the texture.
 * @return the initialized instance of a brush.
 */
- (id)initWithImage:(NSImage *)image backgroundColor:(NSColor *)color position:(NChartTexturePosition)position;

/**
 * Image of the brush.
 */
@property (nonatomic, retain) NSImage *image;

/**
 * Color that fills the area around the texture (if any). If nil, the area is filled with black color.
 */
@property (nonatomic, retain) NSColor *backgroundColor;

/**
 * Position of the texture.
 *
 * @see NChartTexturePosition
 */
@property (nonatomic, assign) NChartTexturePosition position;

@end
