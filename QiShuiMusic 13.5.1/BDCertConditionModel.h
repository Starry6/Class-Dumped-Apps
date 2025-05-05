@interface BDCertConditionModel : NSObject
@property (nonatomic) NSString conditionId;
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary params;
- (void)setType:;
- (id)initWithDict:;
- (id)type;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (id)conditionId;
- (void)setConditionId:;
@end
