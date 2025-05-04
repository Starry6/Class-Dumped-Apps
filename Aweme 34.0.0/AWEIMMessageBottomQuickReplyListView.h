@interface AWEIMMessageBottomQuickReplyListView : UIStackView
@property (nonatomic) NSMutableArray buttons;
@property (nonatomic) NSMutableArray lines;
@property (nonatomic) AWEIMMessageBottomQuickReplyListProps props;
- (void)updateWithProps:;
- (void)p_viewFit;
- (id)p_generateLineUI;
- (void)setButtons:;
- (id)props;
- (id)initWithFrame:;
- (id)buttons;
- (void).cxx_destruct;
- (id)lines;
- (void)setLines:;
- (void)setProps:;
@end
