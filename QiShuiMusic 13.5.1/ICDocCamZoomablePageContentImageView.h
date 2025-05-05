@interface ICDocCamZoomablePageContentImageView : UIImageView
@property (nonatomic) <ICDocCamZoomablePageContentViewDelegate> pageContentViewDelegate;
- (void)touchesBegan:withEvent:;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (id)_accessibilityScrollAncestorForSelector:;
- (BOOL)_accessibilityRespondsToUserInteraction;
- (id)pageContentViewDelegate;
- (void)setPageContentViewDelegate:;
@end
