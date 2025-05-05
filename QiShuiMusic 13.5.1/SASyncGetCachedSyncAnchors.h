@interface SASyncGetCachedSyncAnchors : SABaseClientBoundCommand
@property (nonatomic) NSString interactionId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)interactionId;
- (void)setInteractionId:;
- (BOOL)mutatingCommand;
+ (id)getCachedSyncAnchors;
+ (id)getCachedSyncAnchorsWithDictionary:context:;
@end
