@interface AWEMusicRequestService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)addOrDeleteMusicID:songID:toPlaylistID:scene:action:completion:;
+ (void)postMusic:playlist:action:;
+ (void)requestGuideLunaMusicianInfoWithUserID:completion:;
+ (void)requestCollectLunaSongID:mediaType:actionType:completion:;
+ (void)requestLunaArtistListWithArtistID:cursor:count:completion:;
@end
