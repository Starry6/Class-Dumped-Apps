@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand
@property (nonatomic) NSString influencedUserSharedUserId;
@property (nonatomic) SAMPCollection mediaItems;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)mediaItems;
- (void)setMediaItems:;
- (id)influencedUserSharedUserId;
- (void)setInfluencedUserSharedUserId:;
+ (id)addMediaItemsToLibrary;
+ (id)addMediaItemsToLibraryWithDictionary:context:;
@end
