@interface AWESiriSuggestManager : NSObject
@property (nonatomic) q videoCounter;
@property (nonatomic) NSString lastScene;
@property (nonatomic) NSObject<OS_dispatch_queue> donateQueue;
- (void)donateWidgetSuggestionWithKind:;
- (void)setLastScene:;
- (void)setVideoCounter:;
- (void)trackSiriScene:donateFailInfo:;
- (long long)videoCounter;
- (id)donateQueue;
- (BOOL)checkFrequencyControlForWidget:;
- (void)donateUserActivityWithType:userInfo:extraTrackParams:usingUGServer:usingV3:requestScene:timingType:;
- (id)widgetKindForType:;
- (void)setDonateQueue:;
- (id)init;
- (id)lastScene;
- (void).cxx_destruct;
+ (void)trackWidgetDonation:status:error:;
+ (id)sharedInstance;
@end
