@interface UIAutocorrectBubble : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView backgroundView;
- (id)backgroundView;
- (id)textLabel;
- (id)init;
- (id)alignmentRectInsets;
- (void).cxx_destruct;
- (void)updateWithAutocorrectionText:;
- (id)lastBaselineAnchor;
@end
