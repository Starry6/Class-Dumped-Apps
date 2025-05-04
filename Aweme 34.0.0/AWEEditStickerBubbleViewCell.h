@interface AWEEditStickerBubbleViewCell : UITableViewCell
@property (nonatomic) AWEEditStickerBubbleItem bubbleItem;
@property (nonatomic) UIView sepLine;
@property (nonatomic) UILabel titleLabel;
- (void)setSepLine:;
- (id)sepLine;
- (id)bubbleItem;
- (void)showBubbleShakeAnimation;
- (void)setBubbleItem:;
- (void)touchesCancelled:withEvent:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setupUI;
+ (id)awe_identifier;
@end
