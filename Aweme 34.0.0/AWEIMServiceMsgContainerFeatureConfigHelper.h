@interface AWEIMServiceMsgContainerFeatureConfigHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)haveShowOnlineStatusFeature:;
- (long long)inputBoxAndImMenuStyle:;
- (BOOL)enableUseInputMemoryWithCon:;
- (BOOL)enableB2CShowInputStateWithCon:;
- (BOOL)enableB2CSendInputStateWithCon:;
- (id)p_featureConfigModel:;
+ (id)sharedIntance;
+ (BOOL)p_containerWhiteList:;
@end
