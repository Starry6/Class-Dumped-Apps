@interface AWEHPSlideMonitorManager : NSObject
@property (nonatomic) NSMapTable monitorTouches;
@property (nonatomic) NSMutableDictionary caseCounts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateGestureShouldBeginWithGesture:result:;
- (id)monitorTouches;
- (void)p_updateGestureShouldBeginWithModel:gesture:result:;
- (void)p_receiveTouch:;
- (void)p_handleTouch:changeToPhase:;
- (id)generateTouchMonitorModelWithTouch:;
- (void)p_checkSlideResultWithModel:;
- (id)p_getMonitorCaseWithRespondGestures:expectGestures:;
- (id)caseCounts;
- (void)p_trackWithCase:model:respondGestures:;
- (id)p_getActualSceneWithRespondGestures:shouldBeginResults:;
- (void)setMonitorTouches:;
- (void)setCaseCounts:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
+ (id)sharedInstance;
@end
