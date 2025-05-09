@interface CPLChangeSession : NSObject
@property (nonatomic) Q state;
@property (nonatomic) NSProgress sessionProgress;
@property (nonatomic) NSString sessionIdentifier;
@property (nonatomic) CPLLibraryManager libraryManager;
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setState:;
- (id)sessionIdentifier;
- (id)redactedDescription;
- (void)finalizeWithCompletionHandler:;
- (id)initWithLibraryManager:;
- (void)beginSessionWithKnownLibraryVersion:resetTracker:completionHandler:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)platformObject;
- (id)description;
- (id)sessionProgress;
- (void)tearDownWithCompletionHandler:;
- (id)libraryManager;
- (id)createSessionContext;
+ (id)shortDescription;
+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:;
@end
