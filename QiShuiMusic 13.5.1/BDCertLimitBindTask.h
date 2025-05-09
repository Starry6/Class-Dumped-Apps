@interface BDCertLimitBindTask : NSObject
@property (nonatomic) NSString prioryId;
@property (nonatomic) NSString associateId;
@property (nonatomic) NSDictionary searchMap;
@property (nonatomic) NSDictionary limitMap;
@property (nonatomic) NSDictionary conditionMap;
@property (nonatomic) NSDictionary fallbackSearchMap;
@property (nonatomic) NSDictionary fallbackLimitMap;
@property (nonatomic) NSDictionary fallbackConditionMap;
@property (nonatomic) BOOL noFallback;
@property (nonatomic) BDCertLimitModel result;
- (void)setAssociateId:;
- (id)associateId;
- (id)conditionMap;
- (id)fallbackConditionMap;
- (id)fallbackLimitMap;
- (id)fallbackSearchMap;
- (id)limitMap;
- (id)prioryId;
- (id)searchConditionIdsWithLimitId:;
- (id)searchConditionWithId:;
- (id)searchLimitId;
- (id)searchLimitIdInDict:withKey:;
- (id)searchMap;
- (void)setConditionMap:;
- (void)setFallbackConditionMap:;
- (void)setFallbackLimitMap:;
- (void)setFallbackSearchMap:;
- (void)setLimitMap:;
- (void)setPrioryId:;
- (void)setSearchMap:;
- (id)result;
- (void)execute;
- (void).cxx_destruct;
- (void)setResult:;
- (void)setNoFallback:;
- (BOOL)noFallback;
@end
