@interface AWECloudAlbumDetailBottomView : UIView
@property (nonatomic) double contentHeight;
@property (nonatomic) AWECloudAlbumDetailBottomSelectView selectView;
@property (nonatomic) AWECloudAlbumDetailBottomUploadView uploadView;
- (id)selectView;
- (id)uploadView;
- (id)initWithFrame:contentHeight:;
- (void)setup;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)updateStatus:;
- (void)updateProgress:;
@end
