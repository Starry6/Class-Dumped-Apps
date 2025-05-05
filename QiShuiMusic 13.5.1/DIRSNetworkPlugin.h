@interface DIRSNetworkPlugin : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)request:method:headerFields:body:options:completion:;
- (id)executionQueue;
- (void)commonInit;
- (void).cxx_destruct;
+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
