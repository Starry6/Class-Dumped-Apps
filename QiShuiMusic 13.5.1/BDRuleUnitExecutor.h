@interface BDRuleUnitExecutor : NSObject
@property (nonatomic) NSString cel;
@property (nonatomic) NSArray commands;
@property (nonatomic) <BDREExprEnv> env;
@property (nonatomic) NSString uuid;
- (id)env;
- (void)setCel:;
- (void)setEnv:;
- (id)cel;
- (id)initWithCel:commands:env:uuid:;
- (BOOL)evaluate:;
- (id)uuid;
- (void)setUuid:;
- (id)commands;
- (void).cxx_destruct;
- (void)setCommands:;
@end
