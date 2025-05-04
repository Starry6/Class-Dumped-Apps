@interface AWESearchCustomTagView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) AWESearchCustomTagComponentModel model;
- (void)configDataWithModel:;
- (id)getColorWithColorString:;
- (BOOL)existRGBString:;
- (id)rgbaStringToHex:;
- (id)textLabel;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTextLabel:;
+ (id)sizeWithModel:;
+ (id)textLabelFontWithModel:;
@end
