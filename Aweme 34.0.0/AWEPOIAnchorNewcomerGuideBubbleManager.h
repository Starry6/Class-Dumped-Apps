@interface AWEPOIAnchorNewcomerGuideBubbleManager : NSObject
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) <AWEPOIAnchorFrequencyControllerProtocol> frequencyController;
@property (nonatomic) AWEPOIEntryAnchorUtil poiAnchorUtil;
@property (nonatomic) @? alertCompletionCallback;
@property (nonatomic) AWEPOIAnchorBubbleView bubbleView;
@property (nonatomic) UIView targetView;
@property (nonatomic) <AWEAwemeBizPlayVideoProtocol> videoDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isBubbleShowing;
@property (nonatomic) BOOL isBubbleAlreadyShown;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (void)popoverDidDisappear:;
- (void)popoverDidAppear:;
- (void)setReferString:;
- (id)poiAnchorUtil;
- (void)setPoiAnchorUtil:;
- (BOOL)shouldShowBubble;
- (BOOL)isBubbleShowing;
- (void)setIsBubbleShowing:;
- (void)configWithContext:target:;
- (void)handlePlayerPlayedPeriodChangedWithPlayBackTime:;
- (void)handlePlayerWillLoopPlaying:;
- (void)invokeAlertCompletionCallbackAndClearIfNeeded:;
- (BOOL)hasInteractionPanelShowing;
- (BOOL)isBubbleAlreadyShown;
- (id)frequencyController;
- (void)setIsBubbleAlreadyShown:;
- (void)trackOnBubbleShow;
- (void)setAlertCompletionCallback:;
- (void)showBubbleIfNeeded;
- (id)alertCompletionCallback;
- (void)setFrequencyController:;
- (id)targetView;
- (void)setTargetView:;
- (void).cxx_destruct;
- (void)reset;
- (id)dataModel;
- (id)bubbleView;
- (void)setBubbleView:;
- (void)setVideoDelegate:;
- (id)videoDelegate;
@end
