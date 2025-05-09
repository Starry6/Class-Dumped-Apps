@interface FLEXFieldEditorView : UIView
@property (nonatomic) UILabel targetDescriptionLabel;
@property (nonatomic) UIView targetDescriptionDivider;
@property (nonatomic) UILabel fieldDescriptionLabel;
@property (nonatomic) UIView fieldDescriptionDivider;
@property (nonatomic) NSString targetDescription;
@property (nonatomic) NSString fieldDescription;
@property (nonatomic) NSArray argumentInputViews;
- (id)initWithFrame:;
- (void)layoutSubviews;
- (void)setBackgroundColor:;
- (void)setTargetDescription:;
- (void)setFieldDescription:;
- (void)setArgumentInputViews:;
- (id)sizeThatFits:;
- (id)targetDescription;
- (id)fieldDescription;
- (id)argumentInputViews;
- (id)targetDescriptionLabel;
- (void)setTargetDescriptionLabel:;
- (id)targetDescriptionDivider;
- (void)setTargetDescriptionDivider:;
- (id)fieldDescriptionLabel;
- (void)setFieldDescriptionLabel:;
- (id)fieldDescriptionDivider;
- (void)setFieldDescriptionDivider:;
- (void).cxx_destruct;
+ (id)dividerView;
+ (id)dividerColor;
+ (double)horizontalPadding;
+ (double)verticalPadding;
+ (id)labelFont;
+ (double)dividerLineHeight;
@end
