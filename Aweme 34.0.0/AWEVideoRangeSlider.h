@interface AWEVideoRangeSlider : UIView
@property (nonatomic) UIView topBorder;
@property (nonatomic) UIView bottomBorder;
@property (nonatomic) UIImageView cursor;
@property (nonatomic) UIView bgView;
@property (nonatomic) ACCTextReaderToastView textReaderHintView;
@property (nonatomic) BOOL hasFeedback;
@property (nonatomic) BOOL hasSelectMask;
@property (nonatomic) UILabel leftHandlerBottomLabel;
@property (nonatomic) UILabel rightHandlerBottomLabel;
@property (nonatomic) double lockWidth;
@property (nonatomic) BOOL thumbHandlerMoveTogetherWithGesture;
@property (nonatomic) UIImpactFeedbackGenerator feedBackGenertor;
@property (nonatomic) BOOL holdLeftToDragOn;
@property (nonatomic) BOOL holdRightToDragOn;
@property (nonatomic) BOOL dragRightControlInsideRange;
@property (nonatomic) BOOL rightThumbFlyToRight;
@property (nonatomic) BOOL leftThumbFlyToLeft;
@property (nonatomic) BOOL animationInFlight;
@property (nonatomic) BOOL rightHandleInPan;
@property (nonatomic) BOOL leftHandleInPan;
@property (nonatomic) CAShapeLayer cursorLayer;
@property (nonatomic) NSTimer holdDragOnSliderTimer;
@property (nonatomic) double rightPositionDuringGestureChanging;
@property (nonatomic) BOOL isInSnappingRange;
@property (nonatomic) <AWEVideoRangeSliderDelegate> delegate;
@property (nonatomic) double leftPosition;
@property (nonatomic) double rightPosition;
@property (nonatomic) double cursorPosition;
@property (nonatomic) double bodyWidth;
@property (nonatomic) double audioDuration;
@property (nonatomic) UILabel bubleText;
@property (nonatomic) UILabel draggingBubleText;
@property (nonatomic) AWESliderLeft leftThumb;
@property (nonatomic) AWESliderRight rightThumb;
@property (nonatomic) double maxGap;
@property (nonatomic) double minGap;
@property (nonatomic) BOOL cursorCanOverrunMaxGap;
@property (nonatomic) Q enterFromType;
@property (nonatomic) BOOL showSideHandlerInfo;
@property (nonatomic) BOOL fixedBodyWidthMode;
@property (nonatomic) BOOL isAdapitionOptimize;
@property (nonatomic) BOOL isActive;
@property (nonatomic) q rangeChangeCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleLeftPan:;
- (unsigned long long)enterFromType;
- (void)setEnterFromType:;
- (void)updateTimeLabelFrame:forIPhoneXS:;
- (id)initWithFrame:slideWidth:cursorWidth:height:hasSelectMask:;
- (void)setIsAdapitionOptimize:;
- (void)showVideoIndicator;
- (double)leftPosition;
- (double)rightPosition;
- (void)setMinGap:;
- (void)setMaxGap:;
- (double)maxGap;
- (id)leftThumb;
- (id)rightThumb;
- (id)bubleText;
- (void)updateSliderWithHeight:cursorHeight:;
- (double)getActualLeftPosition;
- (double)getActualRightPosition;
- (void)updateActualLeftPosition:;
- (void)updateActualRightPosition:;
- (void)updateVideoIndicatorByPosition:;
- (void)setFixedBodyWidthMode:;
- (double)minGap;
- (id)draggingBubleText;
- (void)lockSliderWidth;
- (void)setLeftPosition:;
- (void)setRightPosition:;
- (void)showSliderAreaShow:animated:;
- (void)setBubleText:;
- (void)setCursorCanOverrunMaxGap:;
- (void)setShowSideHandlerInfo:;
- (void)setRangeChangeCount:;
- (long long)rangeChangeCount;
- (void)p_vibrate;
- (id)feedBackGenertor;
- (void)setFeedBackGenertor:;
- (void)hideBorderViews;
- (void)setLeftThumb:;
- (void)setRightThumb:;
- (id)textReaderHintView;
- (id)rightHandlerBottomLabel;
- (void)handleRightPan:;
- (void)setCursorWidth:height:;
- (void)handleCursorPan:;
- (BOOL)animationInFlight;
- (BOOL)fixedBodyWidthMode;
- (BOOL)holdLeftToDragOn;
- (BOOL)leftThumbFlyToLeft;
- (BOOL)holdRightToDragOn;
- (BOOL)rightThumbFlyToRight;
- (id)holdDragOnSliderTimer;
- (void)p_invalidSliderTimer;
- (BOOL)thumbHandlerMoveTogetherWithGesture;
- (void)handleSlidePan:forThumbType:;
- (BOOL)rightHandleInPan;
- (void)setLeftHandleInPan:;
- (void)gestureDidBeginByType:;
- (void)setHoldLeftToDragOn:;
- (void)expandRightThumbToRight;
- (void)setTimeLabelWithFeedbackCheck:checkMax:;
- (void)setHoldDragOnSliderTimer:;
- (double)validActualLeftPositionForPosition:;
- (void)p_toggleToastHidden:;
- (BOOL)isInSnappingRange;
- (void)setIsInSnappingRange:;
- (void)setTimeLabelWithFeedbackCheck:;
- (BOOL)showSideHandlerInfo;
- (id)leftHandlerBottomLabel;
- (void)videoRangeChangedByThumbType:;
- (void)restoreRightThumbBackToNormal;
- (void)gestureDidEndByType:;
- (BOOL)leftHandleInPan;
- (void)setRightHandleInPan:;
- (void)setRightPositionDuringGestureChanging:;
- (double)rightPositionDuringGestureChanging;
- (void)setHoldRightToDragOn:;
- (void)expandLeftThumbToLeft;
- (double)validActualRightPositionForPosition:;
- (void)restoreLeftThumbBackToNormal;
- (double)lockWidth;
- (BOOL)cursorCanOverrunMaxGap;
- (id)timeAdjustedStr;
- (id)trimDurationStr;
- (id)rangeSliderTextFormatForDelta:;
- (id)formattedStrForDelta:;
- (id)timeToStr:;
- (void)setThumbHandlerMoveTogetherWithGesture:;
- (void)setLockWidth:;
- (void)setAnimationInFlight:;
- (void)setRightThumbFlyToRight:;
- (void)setLeftThumbFlyToLeft:;
- (BOOL)isAdapitionOptimize;
- (void)bubleTextAnimationWithDragging:thumbType:;
- (id)initWithFrame:slideWidth:;
- (id)trimIntervalStr;
- (void)hiddenVideoIndicator;
- (double)convertActualPositionWithTime:;
- (void)setDraggingBubleText:;
- (void)setTextReaderHintView:;
- (BOOL)hasSelectMask;
- (void)setHasSelectMask:;
- (void)setLeftHandlerBottomLabel:;
- (void)setRightHandlerBottomLabel:;
- (BOOL)dragRightControlInsideRange;
- (void)setDragRightControlInsideRange:;
- (id)cursor;
- (double)delta;
- (void)dealloc;
- (id)delegate;
- (void)setCursorPosition:;
- (void)setFrame:;
- (BOOL)gestureRecognizerShouldBegin:;
- (double)cursorPosition;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
- (BOOL)isActive;
- (void)layoutSubviews;
- (void)unlock;
- (id)bgView;
- (void)setBgView:;
- (BOOL)hasFeedback;
- (double)bodyWidth;
- (void)setBodyWidth:;
- (double)audioDuration;
- (void)setAudioDuration:;
- (void)updateTimeLabel;
- (id)bottomBorder;
- (void)setBottomBorder:;
- (void)setTopBorder:;
- (id)topBorder;
- (void)setHasFeedback:;
- (void)setCursorLayer:;
- (id)cursorLayer;
@end
