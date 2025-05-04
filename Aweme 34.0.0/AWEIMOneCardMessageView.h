@interface AWEIMOneCardMessageView : UIView
@property (nonatomic) UIView bubbleView;
@property (nonatomic) UIView oneCardView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWEIMOneCardMessageProps props;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)p_addSubviews;
- (void)updateWithProps:;
- (id)oneCardView;
- (void)setOneCardView:;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)bubbleView;
- (void)setBubbleView:;
- (void)setProps:;
@end
