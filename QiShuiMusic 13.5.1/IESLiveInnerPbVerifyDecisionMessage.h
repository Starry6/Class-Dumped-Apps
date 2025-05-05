@interface IESLiveInnerPbVerifyDecisionMessage : GPBMessage
@property (nonatomic) NSString decisionConf;
@property (nonatomic) NSString checkReason;
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
+ (id)descriptor;
@end
