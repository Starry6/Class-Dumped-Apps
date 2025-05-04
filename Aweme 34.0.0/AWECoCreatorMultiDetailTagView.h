@interface AWECoCreatorMultiDetailTagView : UIView
@property (nonatomic) BOOL isSignificant;
@property (nonatomic) UIView titleLayerView;
@property (nonatomic) UIView subtitleLayerView;
@property (nonatomic) UILabel significantTitleLabel;
@property (nonatomic) UILabel significantSubtitleLabel;
@property (nonatomic) UILabel normalTitleLabel;
- (id)normalTitleLabel;
- (id)significantTitleLabel;
- (id)significantSubtitleLabel;
- (id)subtitleLayerView;
- (id)titleLayerView;
- (id)initWithTitle:subtitle:isSignificant:;
- (void)setTitleLayerView:;
- (void)setSubtitleLayerView:;
- (void)setSignificantTitleLabel:;
- (void)setSignificantSubtitleLabel:;
- (void)setNormalTitleLabel:;
- (void).cxx_destruct;
- (BOOL)isSignificant;
- (void)setupUI;
- (void)setIsSignificant:;
@end
