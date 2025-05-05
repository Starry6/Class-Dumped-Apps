@interface IESLiveCommentQuickReplyView : UIView
@property (nonatomic) NSArray quickReplyContents;
@property (nonatomic) NSMutableArray contentViews;
@property (nonatomic) UIScrollView scrollContainerView;
@property (nonatomic) CAGradientLayer gradientMaskLayer;
@property (nonatomic) <IESLiveCommentQuickReplyDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContents:contentColor:;
- (void)quickReplyClick:;
- (id)quickReplyContents;
- (id)scrollContainerView;
- (void)setQuickReplyContents:;
- (void)setScrollContainerView:;
- (void)setupUIWithContentColor:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)contentViews;
- (id)hitTest:withEvent:;
- (void)scrollViewDidScroll:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContentViews:;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:;
@end
