@interface IESLiveSaaSNoticeAuditingModel : BDDynamicMTLModel
@property (nonatomic) NSString auditContent;
@property (nonatomic) q auditStatus;
@property (nonatomic) q currentWaitCount;
@property (nonatomic) q toWaitTime;
@property (nonatomic) q totalQueueCount;
@property (nonatomic) NSArray ruleInfo;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)ruleInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
