@interface HTSLiveFeature : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger featureSource;
@property (nonatomic) NSInteger featureTimeliness;
@property (nonatomic) NSInteger refreshInterval;
@property (nonatomic) HTSLiveFeatureValue featureValue;
@property (nonatomic) BOOL hasFeatureValue;
+ (id)descriptor;
@end
