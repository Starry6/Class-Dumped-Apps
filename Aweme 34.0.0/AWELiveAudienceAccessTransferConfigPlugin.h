@interface AWELiveAudienceAccessTransferConfigPlugin : NSObject
@property (nonatomic) AWELiveAudienceAccessContext context;
@property (nonatomic) AWELiveAudienceAccessServiceConfig config;
@property (nonatomic) NSMutableDictionary feedExceptFirstConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stageDidChangedFrom:to:;
- (void)configForStartEnterLive;
- (void)configForDidEnterLive;
- (void)setFeedExceptFirstConfigs:;
- (void)injectionScopeConfig:withKey:;
- (id)singleRoomConfig:;
- (id)mergeContextParams:mergeParams:;
- (id)feedExceptFirstConfigs;
- (void)configBcmPageParams;
- (void)setConfig:;
- (id)config;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
