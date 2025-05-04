@interface AWEMusicListSkeletonRowView : UIView
@property (nonatomic) CALayer imageLayer;
@property (nonatomic) CALayer titleLayer;
@property (nonatomic) CALayer subtitleLayer;
@property (nonatomic) CALayer separatorLine;
- (id)titleLayer;
- (void)setTitleLayer:;
- (void)setSubtitleLayer:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)subtitleLayer;
- (id)imageLayer;
- (void)setImageLayer:;
- (id)separatorLine;
- (void)setSeparatorLine:;
@end
