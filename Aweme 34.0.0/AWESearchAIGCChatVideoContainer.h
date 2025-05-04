@interface AWESearchAIGCChatVideoContainer : UIView
@property (nonatomic) UIImageView imageContainer;
@property (nonatomic) UIView leftTopView;
@property (nonatomic) UILabel leftTopLabel;
@property (nonatomic) UIImageView playImageView;
@property (nonatomic) <AWESearchAIGCVideoCoverProvider> provider;
- (void)setupSubViews;
- (void)addGesture;
- (id)leftTopView;
- (void)setLeftTopView:;
- (void)updateVideoWithModel:;
- (void)imageContainerTap:;
- (id)leftTopLabel;
- (void)searchAIPageClickTrack;
- (void)setLeftTopLabel:;
- (id)init;
- (void)setProvider:;
- (void).cxx_destruct;
- (id)provider;
- (id)imageContainer;
- (void)setImageContainer:;
- (id)playImageView;
- (void)setPlayImageView:;
+ (id)calculateContainerSizeWithModel:;
+ (id)failPlaceholderImage;
+ (id)calculateContainerSizeWithImage:;
+ (id)calculateContainerSizeWithImageSize:;
+ (id)loadingPlaceholderImage;
@end
