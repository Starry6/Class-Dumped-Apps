@interface SAMPMusicPlaybackImminent : SADomainCommand
@property (nonatomic) NSString preloadedUserSharedUserId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)preloadedUserSharedUserId;
- (void)setPreloadedUserSharedUserId:;
+ (id)musicPlaybackImminent;
+ (id)musicPlaybackImminentWithDictionary:context:;
@end
