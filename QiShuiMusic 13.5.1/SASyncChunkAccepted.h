@interface SASyncChunkAccepted : SABaseClientBoundCommand
@property (nonatomic) SASyncAnchor current;
- (id)current;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setCurrent:;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)chunkAccepted;
+ (id)chunkAcceptedWithDictionary:context:;
@end
