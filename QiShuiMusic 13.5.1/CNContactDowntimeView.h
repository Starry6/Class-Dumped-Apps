@interface CNContactDowntimeView : UIView
@property (nonatomic) UILabel downtimeLabel;
@property (nonatomic) NSTextAttachment imageAttachment;
@property (nonatomic) NSDictionary ab_textAttributes;
@property (nonatomic) q elements;
- (id)intrinsicContentSize;
- (long long)elements;
- (void)setElements:;
- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)updateAttributedText;
- (id)ab_textAttributes;
- (void)setAb_textAttributes:;
- (id)downtimeLabel;
- (id)imageAttachment;
+ (id)lockImageAttachment;
@end
