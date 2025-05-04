@interface AWEMVChannelFeedIndexFeatureConfig : NSObject
@property (nonatomic) NSString featureName;
@property (nonatomic) BOOL isStrictSessionMode;
@property (nonatomic) NSArray feedIndexInitPullTypeList;
@property (nonatomic) NSArray feedIndexIncreasePullTypeList;
- (BOOL)isStrictSessionMode;
- (void)setIsStrictSessionMode:;
- (id)feedIndexInitPullTypeList;
- (void)setFeedIndexInitPullTypeList:;
- (id)feedIndexIncreasePullTypeList;
- (void)setFeedIndexIncreasePullTypeList:;
- (id)featureName;
- (void).cxx_destruct;
- (void)setFeatureName:;
@end
