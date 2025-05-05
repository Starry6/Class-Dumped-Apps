@interface BDREIdentifierCommand : BDRECommand
@property (nonatomic) NSString identifier;
- (void)execute:withEnv:error:;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)setIdentifier:;
- (id)instruction;
@end
