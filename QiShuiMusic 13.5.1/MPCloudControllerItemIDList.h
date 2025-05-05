@interface MPCloudControllerItemIDList : NSObject
@property (nonatomic) ICCloudItemIDList cloudItemIDList;
- (id)init;
- (void).cxx_destruct;
- (void)addCloudItemID:idType:;
- (void)insertCloudItemID:idType:atIndex:;
- (void)addPlaylistID:;
- (id)ICCloudItemIDList;
- (id)cloudItemIDList;
- (void)setCloudItemIDList:;
+ (id)cloudItemIDListForPlaylist:;
@end
