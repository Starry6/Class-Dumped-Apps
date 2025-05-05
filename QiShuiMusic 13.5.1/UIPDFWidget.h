@interface UIPDFWidget : UIView
- (void)drawRect:;
- (void)dealloc;
- (void)didReceiveMemoryWarning:;
- (void)heartbeat;
- (id)initWithFrame:withDocument:;
- (void)addedPageView:;
- (void)removedPageView:;
@end
