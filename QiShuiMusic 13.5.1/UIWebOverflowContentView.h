@interface UIWebOverflowContentView : UIView
@property (nonatomic) CALayer webLayer;
- (void)dealloc;
- (id)initWithLayer:;
- (id)superview;
- (void)replaceLayer:;
- (void)willBeRemoved;
- (void)fixUpViewAfterInsertion;
- (void)_setCachedSubviews:;
- (id)webLayer;
- (void)setWebLayer:;
@end
