@interface DIRSEventPropertyJSONValidatorPlugin : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)invalidPropertyError;
- (BOOL)prehandleProcedure:withError:;
- (void)commonInit;
+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
