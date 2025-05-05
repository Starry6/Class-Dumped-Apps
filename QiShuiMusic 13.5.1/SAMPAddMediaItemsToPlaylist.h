@interface SAMPAddMediaItemsToPlaylist : SABaseClientBoundCommand
@property (nonatomic) NSString influencedUserSharedUserId;
@property (nonatomic) NSString insertLocation;
@property (nonatomic) NSArray mediaItems;
@property (nonatomic) SAMPPlaylist playlist;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)mediaItems;
- (void)setMediaItems:;
- (id)playlist;
- (void)setPlaylist:;
- (id)influencedUserSharedUserId;
- (void)setInfluencedUserSharedUserId:;
- (id)insertLocation;
- (void)setInsertLocation:;
+ (id)addMediaItemsToPlaylist;
+ (id)addMediaItemsToPlaylistWithDictionary:context:;
@end
