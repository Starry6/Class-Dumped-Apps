@interface AWECloudAlbumPrivatePostModel : NSObject
@property (nonatomic) EcAlbum album;
@property (nonatomic) PHAsset localAsset;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL uploading;
@property (nonatomic) @? refreshCloudAlbumBlk;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)localAsset;
- (void)setLocalAsset:;
- (BOOL)isLocalAlbum;
- (void)refreshLocalAlbum;
- (void)latestLocalImageWithCompletion:;
- (BOOL)isEqualToAlbumID:;
- (void)uploadTaskChangeWith:isUploading:;
- (void)gotoAlbumDetailPage;
- (id)refreshCloudAlbumBlk;
- (void)setRefreshCloudAlbumBlk:;
- (id)initWithEcAlbum:;
- (void)setAlbum:;
- (void).cxx_destruct;
- (id)name;
- (id)album;
- (BOOL)isUploading;
- (void)setUploading:;
@end
