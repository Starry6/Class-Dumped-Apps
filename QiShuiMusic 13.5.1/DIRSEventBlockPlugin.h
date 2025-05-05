@interface DIRSEventBlockPlugin : DIRSBasicModule
@property (nonatomic) DIRSValue config;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)handleProcedure:withError:;
- (void)onRealtimeSettingsDidUpdate:;
- (id)outError;
- (void)setConfig:;
- (void)commonInit;
- (void)restore;
- (void).cxx_destruct;
- (id)config;
+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
