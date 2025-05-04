@interface AWETaskPagePopupSmartService : AWEBaseSmartServiceImpl
@property (nonatomic) BOOL needTrack;
@property (nonatomic) float threshold;
@property (nonatomic) AWETaskPagePopupInfo popupInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)runWithConfigBuilder:completion:;
- (id)popupInfo;
- (void)setPopupInfo:;
- (void)onTriggerEvent:params:;
- (BOOL)injectTruthForData:withInput:ext:;
- (double)getCurrentTimeMs;
- (BOOL)needTrack;
- (void)setNeedTrack:;
- (float)threshold;
- (id)init;
- (void)setThreshold:;
- (void).cxx_destruct;
- (void)setupObserver;
+ (id)abTestConfig;
+ (id)sharedInstance;
@end
