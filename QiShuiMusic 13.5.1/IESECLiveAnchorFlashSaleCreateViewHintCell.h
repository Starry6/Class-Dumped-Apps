@interface IESECLiveAnchorFlashSaleCreateViewHintCell : IESECLiveAnchorFlashSaleCreateViewCell
@property (nonatomic) UIImageView hintImageView;
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) NSString hintString;
@property (nonatomic) NSString backgroundColorString;
@property (nonatomic) NSString hintImageURL;
@property (nonatomic) q fontSize;
@property (nonatomic) NSString hintColorString;
- (void)p_setupCustomUI;
- (id)hintColorString;
- (id)backgroundColorString;
- (id)hintImageURL;
- (id)hintString;
- (void)setBackgroundColorString:;
- (void)setHintColorString:;
- (void)setHintImageURL:;
- (void)setHintString:;
- (void)setItem:showWarn:;
- (id)initWithStyle:reuseIdentifier:;
- (long long)fontSize;
- (void).cxx_destruct;
- (void)setFontSize:;
- (id)hintLabel;
- (void)setHintLabel:;
- (id)hintImageView;
- (void)setHintImageView:;
@end
