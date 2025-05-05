@interface UIEventAttributionView : UIView
- (void)_commonInit;
- (void)didMoveToSuperview;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)didMoveToWindow;
- (void)setHidden:;
- (void)_updateLayerContents;
+ (id)lastEventMessage;
+ (void)setLastEventMessage:;
@end
