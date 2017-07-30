/**
 * This file is the part of NChart3D Framework
 * http://www.nchart3d.com
 *
 * File: NChartGradientBrush.h
 * Version: "2.9.1"
 *
 * Copyright (C) 2017 Nulana LTD. All Rights Reserved.
 */

#import "NChartBrush.h"


/**
 * The NChartGradientStop class provides a control point of the gradient defining some color and it's position on the
 * area being filled with a gradient. The gradient is constructed from multiple gradient-stops.
 */
NCHART3D_EXPORT @interface NChartGradientStop : NSObject <NSCopying>

/**
 * Create gradient stop with color and offset.
 *
 * @param color - the color of gradient stop.
 * @param offset - the offset of gradient stop.
 * @return a new instance of the gradient stop.
 */
+ (NChartGradientStop *)gradientStopWithColor:(NSColor *)color andOffset:(float)offset;

/**
 * Init gradient stop with color and offset
 *
 * @param color - the color of gradient stop.
 * @param offset - the offset of gradient stop.
 * @return inited instance of the gradient stop.
 */
- (id)initWithColor:(NSColor *)color andOffset:(float)offset;

/**
 * Color of the gradient-stop.
 */
@property (nonatomic, retain) NSColor *color;

/**
 * Offset of gradient-stop in the whole gradient. Offset is in interval 0..1. 0 means the start of the area filled
 * with a gradient, 1 means the end of it. For example if you want to create a gradient of two colors, it's common to
 * use 0.0 as the offset for the first color and 1.0 for the second.
 */
@property (nonatomic, assign) float offset;

@end

/**
 * The NChartGradientBrush class provides common methods for the brush that fills an area with some gradient.
 */
NCHART3D_EXPORT @interface NChartGradientBrush : NChartBrush

/**
 * Array of gradient-stops that construct the gradient for this brush.
 * @see NChartGradientStop.
 */
@property (nonatomic, retain) NSArray *gradientStops;

@end
