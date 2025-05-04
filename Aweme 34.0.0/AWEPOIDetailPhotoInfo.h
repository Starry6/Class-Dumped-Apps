@interface AWEPOIDetailPhotoInfo : AWEPOIDetailPhotoBaseInfo
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString tabID;
@property (nonatomic) NSString title;
@property (nonatomic) AWEPOIPhotoUploaderInfoModel uploader;
- (id)uploader;
- (void)setUploader:;
- (void)setTabID:;
- (id)initWithAlbumPhoto:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)tabID;
- (id)tabName;
- (void)setTabName:;
@end
