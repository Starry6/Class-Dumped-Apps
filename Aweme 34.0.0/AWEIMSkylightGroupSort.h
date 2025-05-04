@interface AWEIMSkylightGroupSort : MTLModel
@property (nonatomic) Q showNumber;
@property (nonatomic) NSArray priorityOrder;
@property (nonatomic) AWEIMSkylightExitCondition exitCondition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)priorityOrder;
- (unsigned long long)showNumber;
- (void)setShowNumber:;
- (void)setPriorityOrder:;
- (id)exitCondition;
- (void)setExitCondition:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
