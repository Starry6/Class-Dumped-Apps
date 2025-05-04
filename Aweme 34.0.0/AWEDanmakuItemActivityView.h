@interface AWEDanmakuItemActivityView : AWEDanmakuItemCommonView
@property (nonatomic) UIImageView prefixImage;
- (void)updateWithDescriptor:;
- (void)updateDanmaKuUnitView;
- (void)addSubViews;
- (id)prefixImage;
- (void)updateDanmakuPrefixImageViewLayOut;
- (double)obtainContentLabelX;
- (double)obtainOwnerBorderRightOffset;
- (void)setPrefixImage:;
- (void).cxx_destruct;
@end
