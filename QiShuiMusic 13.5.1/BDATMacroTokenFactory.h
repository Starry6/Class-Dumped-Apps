@interface BDATMacroTokenFactory : NSObject
@property (nonatomic) NSLock macroLock;
@property (nonatomic) NSMutableDictionary macroTokens;
@property (nonatomic) NSArray tokens;
- (void)setMacroTokens:;
- (id)macroLock;
- (id)macroTokens;
- (void)registMacroTokens:;
- (void)setMacroLock:;
- (void)unregistMacroToken:;
- (id)init;
- (void).cxx_destruct;
- (id)tokens;
+ (id)sharedModule;
@end
