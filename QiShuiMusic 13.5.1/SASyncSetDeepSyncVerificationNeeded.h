@interface SASyncSetDeepSyncVerificationNeeded : SABaseClientBoundCommand
@property (nonatomic) NSArray keys;
- (id)keys;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setKeys:;
- (id)encodedClassName;
+ (id)setDeepSyncVerificationNeeded;
+ (id)setDeepSyncVerificationNeededWithDictionary:context:;
@end
