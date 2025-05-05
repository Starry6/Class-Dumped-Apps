@interface RACBehaviorSubject : RACSubject
@property (nonatomic) @ currentValue;
- (void)sendNext:;
- (id)currentValue;
- (void)setCurrentValue:;
- (id)subscribe:;
- (void).cxx_destruct;
+ (id)behaviorSubjectWithDefaultValue:;
@end
