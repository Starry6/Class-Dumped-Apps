@interface AWEPOIVirgoOptiConditionModel : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString type;
@property (nonatomic) NSString op;
@property (nonatomic) NSString alias;
@property (nonatomic) @ value;
@property (nonatomic) <AWEPOIVirgoOptiConditionOperator> conditionOperator;
@property (nonatomic) BOOL isValidCondition;
- (BOOL)isValidCondition;
- (id)conditionOperator;
- (void)setConditionOperator:;
- (id)value;
- (id)alias;
- (void)setKey:;
- (id)key;
- (void)setValue:;
- (id)type;
- (void)setType:;
- (id)initWithCondition:;
- (void).cxx_destruct;
- (void)setAlias:;
- (id)op;
- (void)setOp:;
@end
