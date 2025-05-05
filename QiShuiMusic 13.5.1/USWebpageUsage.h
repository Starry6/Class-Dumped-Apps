@interface USWebpageUsage : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) BOOL usageTrusted;
@property (nonatomic) <_CDAsyncLocalContext> context;
@property (nonatomic) <_DKKnowledgeSaving> eventStorage;
@property (nonatomic) NSURL URL;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithURL:;
- (id)eventStorage;
- (id)context;
- (void).cxx_destruct;
- (id)description;
- (id)URL;
- (BOOL)usageTrusted;
- (id)initWithURL:bundleIdentifier:;
- (void)changeState:completionHandler:;
- (id)initWithURL:context:eventStorage:bundleIdentifier:usageTrusted:;
- (id)initWithURL:bundleIdentifier:auditToken:;
+ (id)getProcessIdentifier;
@end
