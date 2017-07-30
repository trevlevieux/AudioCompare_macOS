/**
 * This file is the part of NChart3D Framework
 * http://www.nchart3d.com
 *
 * File: NChartView.h
 * Version: "2.9.1"
 *
 * Copyright (C) 2017 Nulana LTD. All Rights Reserved.
 */

#import <Foundation/Foundation.h>
#import "NChart.h"


/**
 * The NChartView class provides a view to display the chart. This view can be added anywhere to view the hierarchy of
 * the app.
 */
NCHART3D_EXPORT @interface NChartView : NSView

/**
 * Get chart instance. It is created with the view's creation and destroyed with its destruction.
 * @see NChart.
 */
@property (nonatomic, readonly) NChart *chart;

/**
 * Flag determining if view is allowed to recreate internal rendering data structures (YES) or not (NO). The default
 * value is YES.
 * <br> Use this flag to temporary lock the updating of the view. You may need to lock it (by setting NO to this
 * property) when view disappears from screen and unlock it (by setting YES) in it appears back. This kind of
 * locking helps to avoid troubles related to the updating of invisible OpenGL-based views.
 */
@property (nonatomic, assign) BOOL isUpdatingEnabled;

/**
 * Capture screenshot of the chart to image.
 *
 * @return new image with the screenshot.
 */
- (NSImage *)captureScreenshot;

@end
