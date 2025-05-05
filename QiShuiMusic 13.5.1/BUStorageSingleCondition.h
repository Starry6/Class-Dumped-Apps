@interface BUStorageSingleCondition : BUStorageCondition
@property (nonatomic) NSString field;
@property (nonatomic) @ value;
@property (nonatomic) Q type;
- (id)conditionString;
- (id)conditionStringForGroup;
- (id)_type;
- (id)field;
- (void)setType:;
- (void)setField:;
- (void)setValue:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)value;
@end
