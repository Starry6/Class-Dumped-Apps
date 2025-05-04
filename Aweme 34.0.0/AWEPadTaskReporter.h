@interface AWEPadTaskReporter : HTSService
@property (nonatomic) NSCache responseCache;
@property (nonatomic) NSMutableArray requestRecords;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportTaskWithScene:launchFrom:;
- (void)checkTargetUserForSecUid:scene:;
- (id)getKeyForScene:;
- (void).cxx_destruct;
- (id)weakTarget;
- (id)requestRecords;
- (void)setRequestRecords:;
- (id)responseCache;
- (void)setResponseCache:;
+ (Class)weakTargetClass;
+ (id)defaultReporter;
@end
