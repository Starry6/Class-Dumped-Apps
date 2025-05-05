@interface IESECRelationTruncatedTextView : UIView
@property (nonatomic) YYLabel textLabel;
@property (nonatomic) NSAttributedString text;
@property (nonatomic) NSAttributedString truncationToken;
@property (nonatomic) Q truncationType;
@property (nonatomic) Q maxNumberOfLines;
@property (nonatomic) double lineHeight;
- (unsigned long long)maxNumberOfLines;
- (void)p_updateLayout;
- (void)setMaxNumberOfLines:;
- (void)setTruncationType:;
- (unsigned long long)truncationType;
- (id)textLabel;
- (void)layoutSubviews;
- (void)setText:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)text;
- (void)setTextLabel:;
- (double)lineHeight;
- (void)setLineHeight:;
- (id)truncationToken;
- (void)setTruncationToken:;
@end
