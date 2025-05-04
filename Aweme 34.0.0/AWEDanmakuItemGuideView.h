@interface AWEDanmakuItemGuideView : AWEDanmakuItemCommonView
@property (nonatomic) AWEGradientView bottomGradientView;
@property (nonatomic) UIImageView prefixImage;
- (void)updateWithDescriptor:;
- (id)initWithItemViewType:;
- (void)updateDanmaKuUnitView;
- (void)addSubViews;
- (id)prefixImage;
- (double)obtainContentLabelX;
- (void)setPrefixImage:;
- (void)setupPrefixImageView;
- (void)updateDanmakuPrefixImageViewLayout;
- (void).cxx_destruct;
- (id)bottomGradientView;
- (void)setBottomGradientView:;
@end
