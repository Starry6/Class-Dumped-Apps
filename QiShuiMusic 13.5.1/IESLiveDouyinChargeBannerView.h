@interface IESLiveDouyinChargeBannerView : UIView
@property (nonatomic) q style;
@property (nonatomic) IESLiveRichTextBuilder richTextBuilder;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) double maxWidth;
@property (nonatomic) @? tapBlock;
- (id)richTextBuilder;
- (void)setRichTextBuilder:;
- (void)setTapBlock:;
- (id)tapBlock;
- (void)updateWithRichTextModels:backgroundImage:completion:;
- (id)backgroundImageView;
- (double)maxWidth;
- (void)setStyle:;
- (void)setMaxWidth:;
- (void).cxx_destruct;
- (long long)style;
- (id)initWithStyle:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setBackgroundImageView:;
- (void)tapAction;
@end
