@interface UIKBTutorialSinglePageView : UIView
@property (nonatomic) UIView visualDisplayView;
@property (nonatomic) UILabel textTitle;
@property (nonatomic) UILabel textBody;
@property (nonatomic) BOOL useAlertStyle;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithImageView:;
- (void)configPageView;
- (id)visualDisplayView;
- (void)setVisualDisplayView:;
- (id)textTitle;
- (void)setTextTitle:;
- (id)textBody;
- (void)setTextBody:;
- (BOOL)useAlertStyle;
- (void)setUseAlertStyle:;
@end
