@interface BMStreamSyncPolicy : NSObject
@property (nonatomic) # registeredEventClass;
@property (nonatomic) NSDictionary policy;
- (id)init;
- (id)policy;
- (void).cxx_destruct;
- (id)initWithPolicyDictionary:eventClass:;
- (unsigned long long)directionsSupportedForTransport:;
- (unsigned long long)directionsSupportedForTransport:fromPlatform:;
- (BOOL)supportsTransport:direction:;
- (BOOL)supportsTransport:direction:fromPlatform:;
- (BOOL)supportsSyncingWithPlatform:overTransport:inDirection:;
- (BOOL)supportsSyncingWithPlatform:overTransport:inDirection:fromPlatform:;
- (Class)registeredEventClass;
@end
