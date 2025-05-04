@interface AWEQRCodeLandscapeShareGuideView : UIView
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UIImageView saveImageView;
@property (nonatomic) UIImageView openAppImageView;
@property (nonatomic) UILabel saveImageLabel;
@property (nonatomic) UILabel openAppLabel;
@property (nonatomic) BOOL forSaveImage;
- (id)saveImageView;
- (id)openAppImageView;
- (id)saveImageLabel;
- (id)openAppLabel;
- (id)aAWESharePrepareURLStageCommonAdapter;
- (id)initForSaveImage:;
- (void)setSaveImageView:;
- (void)setOpenAppImageView:;
- (void)setSaveImageLabel:;
- (void)setOpenAppLabel:;
- (BOOL)forSaveImage;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupViews;
+ (Class)aAWESharePrepareURLStageCommonAdapterClass;
@end
