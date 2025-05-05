@interface DIRSPluginConsole : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addLog:;
- (void)_print:;
- (id)executionQueue;
- (void)commonInit;
+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
