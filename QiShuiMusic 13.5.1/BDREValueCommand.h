@interface BDREValueCommand : BDRECommand
@property (nonatomic) @ value;
- (void)execute:withEnv:error:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)initWithValue:;
- (id)instruction;
@end
