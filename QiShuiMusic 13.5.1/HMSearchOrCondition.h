@interface HMSearchOrCondition : HMSearchCondition
@property (nonatomic) NSMutableArray internalConditions;
@property (nonatomic) NSArray conditions;
- (id)internalConditions;
- (void)setInternalConditions:;
- (void)addCondition:;
- (id)conditions;
- (id)init;
- (void).cxx_destruct;
@end
