@interface AWEIMConversationFeatureConfigManager : NSObject
@property (nonatomic) NSDictionary configs;
- (void)setConfigs:;
- (id)configWithConversation:;
- (id)configWithCon:peerUser:;
- (id)configWithBaseConversationModel:peerUser:;
- (void)__setupConversationFeatureConfigs;
- (void)updateRemoteConfig;
- (id)__configWithIsGroup:conSharedSyncedExt:peerUser:isStranger:;
- (id)init;
- (void).cxx_destruct;
- (id)configs;
+ (id)makeCreatorFansGroupConversationFeatureConfig;
+ (id)sharedManager;
@end
