@interface IESLiveBigPartyGuestInfoTagView : UIView
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIView bgView;
@property (nonatomic) double fontScale;
@property (nonatomic) NSString tagString;
@property (nonatomic) UIColor tagBgColor;
- (void)setTagBgColor:;
- (void)setTagLabel:;
- (void)setTagString:;
- (id)tagBgColor;
- (id)tagLabel;
- (id)tagString;
- (void)setBackgroundColor:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (double)fontScale;
- (void)setFontScale:;
@end
