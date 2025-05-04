@interface AWESearchCoverTagView : UIView
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) AWESearchCoverTagComponentModel model;
- (void)configDataWithModel:;
- (id)textLabel;
- (void)setModel:;
- (id)iconImage;
- (id)init;
- (void)setIconImage:;
- (id)model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTextLabel:;
+ (id)sizeWithModel:;
+ (id)textLabelFontWithModel:;
@end
