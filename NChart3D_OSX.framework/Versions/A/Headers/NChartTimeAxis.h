/**
 * This file is the part of NChart3D Framework
 * http://www.nchart3d.com
 *
 * File: NChartTimeAxis.h
 * Version: "2.9.1"
 *
 * Copyright (C) 2017 Nulana LTD. All Rights Reserved.
 */

#import "NChartAxis.h"
#import "NChartTimeAxisTooltip.h"


@class NChartTimeAxis;

/**
 * The NChartTimeAxisDataSource protocol provides methods to control data displayed on the time axis.
 */
@protocol NChartTimeAxisDataSource <NSObject>

/**
 * Get array timestamps available. They are strings representing ticks (for example, years, or some names).
 *
 * @param timeAxis - time axis to get timestamps for.
 * @return an array of timestamps.
 * @see NChartTimeAxis.
 */
- (NSArray *)timeAxisDataSourceTimestampsForAxis:(NChartTimeAxis *)timeAxis;

@end

/**
 * The NChartTimeAxis class provides methods to display the time axis of the chart.
 */
NCHART3D_EXPORT @interface NChartTimeAxis : NChartAxis

/**
 * Set images for button "go to the beginning".
 *
 * @param normal - image for the button's normal state.
 * @param pushed - image for the button's pushed state.
 */
- (void)setBeginButtonStateImagesNormal:(NSImage *)normal andPushed:(NSImage *)pushed;

/**
 * Set images for button "go to the ending".
 *
 * @param normal - image for the button's normal state.
 * @param pushed - image for the button's pushed state.
 */
- (void)setEndButtonStateImagesNormal:(NSImage *)normal andPushed:(NSImage *)pushed;

/**
 * Set images for button "play".
 *
 * @param normal - image for the button's normal state.
 * @param pushed - image for the button's pushed state.
 */
- (void)setPlayButtonStateImagesNormal:(NSImage *)normal andPushed:(NSImage *)pushed;

/**
 * Set images for button "pause".
 *
 * @param normal - image for the button's normal state.
 * @param pushed - image for the button's pushed state.
 */
- (void)setPauseButtonStateImagesNormal:(NSImage *)normal andPushed:(NSImage *)pushed;

/**
 * Set image for the handler of the slider.
 *
 * @param handler - image for the slider's handler.
 */
- (void)setHandlerImage:(NSImage *)handler;

/**
 * Specify the image for the slider and the cap insets to stretch it. The cap insets works as the insets in a method
 * <code>[NSImage resizableImageWithCapInsets:]</code>. This means, they specify the stretchable caps of the image.
 *
 * @param slider - image for the slider.
 * @param capInsets - cap insets for the image.
 */
- (void)setSliderImage:(NSImage *)slider capInsets:(NSEdgeInsets)capInsets;

/**
 * Set all images used for time axis at once. This method automatically adjusts <tickSize> and <tickOffset> according to
 * images provided.
 *
 * @param beginNormal - image for the begin button's normal state.
 * @param beginPushed - image for the begin button's pushed state.
 * @param endNormal - image for the end button's normal state.
 * @param endPushed - image for the end button's pushed state.
 * @param playNormal - image for the play button's normal state.
 * @param playPushed - image for the play button's pushed state.
 * @param pauseNormal - image for the pause button's normal state.
 * @param pausePushed - image for the pause button's pushed state.
 * @param slider - image for the slider.
 * @param handler - image for the slider's handler.
 * @param contentScale - current content scale.
 */
- (void)setImagesForBeginNormal:(NSImage *)beginNormal beginPushed:(NSImage *)beginPushed
                      endNormal:(NSImage *)endNormal endPushed:(NSImage *)endPushed
                     playNormal:(NSImage *)playNormal playPushed:(NSImage *)playPushed
                    pauseNormal:(NSImage *)pauseNormal pausePushed:(NSImage *)pausePushed
                         slider:(NSImage *)slider handler:(NSImage *)handler
                   contentScale:(double)contentScale;

/**
 * Go to the next timestamp (without any user interactions).
 */
- (void)goToNextTick;

/**
 * Go to the previous timestamp (without any user interactions).
 */
- (void)goToPreviousTick;

/**
 * Go to the beginning of the timeline (without any user interactions).
 */
- (void)goToFirstTick;

/**
 * Go to the ending of the timeline (without any user interactions).
 */
- (void)goToLastTick;

/**
 * Start playing the timeline (without any user interactions).
 */
- (void)play;

/**
 * Stop playing the timeline (without any user interactions).
 */
- (void)stop;

/**
 * Current timestamp index (index of the timestamp tick where the handler stays).
 */
@property (nonatomic, assign) NSInteger currentIndex;

/**
 * Tooltip that appears over the handler. This is nil by default.
 * @see NChartTimeAxisTooltip.
 */
@property (nonatomic, retain) NChartTimeAxisTooltip *tooltip;

/**
 * Font used to display timestamp titles.
 */
@property (nonatomic, retain) NSFont *tickTitlesFont;

/**
 * Color used to display timestamp titles.
 */
@property (nonatomic, retain) NSColor *tickTitlesColor;

/**
 * Color used to display timestamp ticks.
 */
@property (nonatomic, retain) NSColor *tickColor;

/**
 * Size of ticks in pixels.
 */
@property (nonatomic, assign) CGSize tickSize;

/**
 * Offset of timestamp ticks (spacing between slider and ticks) in pixels. If positive, ticks are outside of slider, 
 * if negative, ticks may overlap the slider; so the outer border of the slider (including the slider's handler) is
 * assumed as zero offset.
 */
@property (nonatomic, assign) float tickOffset;

/**
 * Offset of timestamp titles (spacing between the slider and titles) in pixels.
 */
@property (nonatomic, assign) float tickTitlesOffset;

/**
 * Shape of timestamp ticks.
 * @see NChartTimeAxisTickShape.
 */
@property (nonatomic, assign) NChartTimeAxisTickShape tickShape;

/**
 * Layout of timestamp titles.
 * @see NChartTimeAxisLabelsLayout.
 */
@property (nonatomic, assign) NChartTimeAxisLabelsLayout tickTitlesLayout;

/**
 * Position of timestamp titles.
 * @see NChartTimeAxisLabelsPosition.
 */
@property (nonatomic, assign) NChartTimeAxisLabelsPosition tickTitlesPosition;

/**
 * Minimal spacing between neighbor ticks in pixels (the tick is the center place of the timestamp title, a kind of
 * milestone on the axis). According to this value some timestamps can be hidden, if there are too many of them.
 */
@property (nonatomic, assign) float minTickSpacing;

/**
 * Margin of the time axis.
 */
@property (nonatomic, assign) NChartMargin margin;

/**
 * Flag indicating whether the tooltip should be hidden automatically when the user interactions end (YES) or not (NO).
 */
@property (nonatomic, assign) BOOL autohideTooltip;

/**
 * Time that takes to play the whole time axis in seconds.
 */
@property (nonatomic, assign) float animationTime;

/**
 * Padding of the time axis.
 */
@property (nonatomic, assign) NChartMargin padding;

/**
 * Frame of the time axis in the view's coordinate system.
 * @note The frame is a rect fully enclosing the entire time axis with its ticks, labels and control buttons, but not
 * its tooltip. This rect is calculated during <code>updateData</code> call when the chat lays out its elements.
 */
@property (nonatomic, readonly) CGRect frame;

/**
 * Time axis data source.
 * @see NChartTimeAxisDataSource.
 */
@property (nonatomic, assign) id<NChartTimeAxisDataSource> dataSource;

@end
