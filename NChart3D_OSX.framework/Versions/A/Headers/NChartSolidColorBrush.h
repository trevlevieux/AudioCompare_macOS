/**
 * This file is the part of NChart3D Framework
 * http://www.nchart3d.com
 *
 * File: NChartSolidColorBrush.h
 * Version: "2.9.1"
 *
 * Copyright (C) 2017 Nulana LTD. All Rights Reserved.
 */

#import "NChartBrush.h"


/**
 * The NChartSolidColorBrush class provides the brush that fills the area with a solid color.
 */
NCHART3D_EXPORT @interface NChartSolidColorBrush : NChartBrush

/**
 * Create brush with color.
 *
 * @param color - color for the brush.
 * @return a new instance of the solid color brush.
 */
+ (NChartSolidColorBrush *)solidColorBrushWithColor:(NSColor *)color;

/**
 * Init brush with color.
 *
 * @param color - color for the brush.
 * @return the initialized instance of a brush.
 */
- (id)initWithColor:(NSColor *)color;

/**
 * Color of the brush.
 */
@property (nonatomic, retain) NSColor *color;

@end
