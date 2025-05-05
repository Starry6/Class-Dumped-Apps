@interface GEOResourceManifestUpdateAssertionRegistry : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeAssertion:;
- (id)init;
- (void)dealloc;
- (id)addInternalAssertionForReason:;
- (id)addAssertionForProcess:reason:creationTimestamp:;
- (id)activeAssertionsDescription;
- (BOOL)hasActiveAssertions;
- (void).cxx_destruct;
- (id)captureStatePlistWithHints:;
+ (id)sharedRegistry;
@end
