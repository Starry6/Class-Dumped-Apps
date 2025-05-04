@interface AWEProfileEndorsementSubtitleLabel : UILabel
- (void)configWithSubtitleInfo:;
- (id)initWithFrame:;
- (void)setupUI;
+ (double)heightWithSubtitleInfo:maxWidth:;
+ (id)subtitleFont;
@end
