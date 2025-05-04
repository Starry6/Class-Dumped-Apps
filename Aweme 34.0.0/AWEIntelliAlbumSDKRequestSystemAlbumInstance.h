@interface AWEIntelliAlbumSDKRequestSystemAlbumInstance : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestImageWithAssetId:size:completion:;
- (void)requestVideoWithAssetId:size:completion:;
@end
