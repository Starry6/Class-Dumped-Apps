@interface BUStorageGroupCondition : BUStorageCondition
@property (nonatomic) NSMutableSet conditions;
@property (nonatomic) Q connector;
- (id)conditionString;
- (unsigned long long)connector;
- (void)setConnector:;
- (void)addCondition:;
- (id)conditions;
- (void)setConditions:;
- (id)initWithCondition:;
- (void).cxx_destruct;
- (id)_connector;
@end
