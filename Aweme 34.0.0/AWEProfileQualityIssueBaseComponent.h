@interface AWEProfileQualityIssueBaseComponent : AWEProfileBaseComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handlePanGes:;
- (void)addGestureIfNeed;
- (void)reportUserSyncErrorIfNeedWithResultUID:resultSecUID:userSyncArea:tabID:path:;
- (void)setAttachGestureSet:;
- (id)attachGestureSet;
- (unsigned long long)directionFromGesture:;
- (BOOL)isProfileFullScreen;
- (BOOL)isExpectedGesture:;
- (void)bindUserSyncService;
- (void)viewDidLoad;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)viewDidAppear;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)panGesture;
- (void)setPanGesture:;
- (void)onInit;
@end
