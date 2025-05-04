@interface AWEIMSharePoiRankMessageView : UIView
@property (nonatomic) AWEIMSharePoiRankMessageProps props;
@property (nonatomic) AWEIMShareCardView bubbleView;
- (void)p_addGesture;
- (void)updateWithProps:;
- (void)p_onTap:;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)bubbleView;
- (void)setBubbleView:;
- (void)setProps:;
@end
