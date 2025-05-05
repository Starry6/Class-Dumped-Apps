@interface BDEntryVerifyCondition : BDCertCondition
@property (nonatomic) NSSet allowList;
- (id)extractConfigParams;
- (id)methodNameWithCertUnit:;
- (void)parseParams:;
- (id)validateCertUnit:;
- (id)error;
- (void).cxx_destruct;
- (void)setAllowList:;
- (id)allowList;
@end
