@interface AWEPushGuideStrategyManager : NSObject
@property (nonatomic) NSMutableDictionary pushGuideBlocks;
@property (nonatomic) NSDictionary originTrackParams;
@property (nonatomic) NSString currentEventType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPitayaPushGuide:;
- (void)setOriginTrackParams:;
- (id)originTrackParams;
- (void)pushGuideActionSettingsBack:isOpen:;
- (void)registerPushGuideActionBlock:scene:;
- (void)setPushGuideBlocks:;
- (void)setCurrentEventType:;
- (id)pushGuideBlocks;
- (id)currentEventType;
- (void)excuteWithParam:;
- (void)registerUGServiceStrategy;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstanced;
@end
