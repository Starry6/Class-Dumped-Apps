@interface TLKMediaInfoView : TLKView
@property (nonatomic) TLKImageView imageView;
@property (nonatomic) TLKContentsContainerView contentsContainer;
@property (nonatomic) TLKImage image;
@property (nonatomic) NSArray contents;
- (id)contents;
- (void)setImage:;
- (void)setContents:;
- (void).cxx_destruct;
- (id)imageView;
- (id)image;
- (void)setImageView:;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (BOOL)imageViewIsHidden;
- (id)titleLabelStrings;
- (id)detailLabelStrings;
- (id)contentsContainer;
- (void)setContentsContainer:;
@end
