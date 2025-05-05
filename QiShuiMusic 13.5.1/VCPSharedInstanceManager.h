@interface VCPSharedInstanceManager : NSObject
- (id)init;
- (void)resetSharedInstanceWithIdentifier:;
- (void).cxx_destruct;
- (void)reset;
- (id)sharedInstanceWithIdentifier:andCreationBlock:;
+ (id)sharedManager;
@end
