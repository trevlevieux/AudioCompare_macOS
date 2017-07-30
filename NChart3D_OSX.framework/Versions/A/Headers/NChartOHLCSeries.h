/**
 * This file is the part of NChart3D Framework
 * http://www.nchart3d.com
 *
 * File: NChartOHLCSeries.h
 * Version: "2.9.1"
 *
 * Copyright (C) 2017 Nulana LTD. All Rights Reserved.
 */

#import "NChartSolidSeries.h"


/**
 * The NChartOHLCSeries class provides methods to display OHLC series.
 */
NCHART3D_EXPORT @interface NChartOHLCSeries : NChartSolidSeries

/**
 * Color for positive candles.
 */
@property (nonatomic, retain) NSColor *positiveColor;

/**
 * Color for negative candles.
 */
@property (nonatomic, retain) NSColor *negativeColor;

@end

/**
 * The NChartOHLCSeries class provides global settings for <NChartOHLCSeries>.
 */
NCHART3D_EXPORT @interface NChartOHLCSeriesSettings : NChartSolidSeriesSettings

@end
