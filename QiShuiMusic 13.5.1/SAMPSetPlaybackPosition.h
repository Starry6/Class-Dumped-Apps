@interface SAMPSetPlaybackPosition : SADomainCommand
@property (nonatomic) NSInteger position;
- (void)setPosition:;
- (int)position;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setPlaybackPosition;
+ (id)setPlaybackPositionWithDictionary:context:;
@end
