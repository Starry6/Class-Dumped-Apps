@interface AWEECOMIMCardComponentSingleIconLabelView : UIView
@property (nonatomic) YYLabel label;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)label;
- (void).cxx_destruct;
- (void)updateWithData:;
+ (double)designHeightWithData:width:;
+ (id)singleLabelTextLayoutWithContent:maxWidth:;
+ (double)textTopPadding;
@end
