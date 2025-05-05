@interface HTSLiveRelevantRecommendation_EcomInfo : IESLivePBBaseMessage
@property (nonatomic) q productId;
@property (nonatomic) NSString productName;
+ (id)descriptor;
@end
