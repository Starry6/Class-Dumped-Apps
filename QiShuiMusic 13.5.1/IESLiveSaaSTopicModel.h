@interface IESLiveSaaSTopicModel : BDDynamicModel
@property (nonatomic) NSString challengeID;
@property (nonatomic) NSString challengeName;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) q source;
- (id)sourceForTrace;
+ (id)traceForSource:;
@end
