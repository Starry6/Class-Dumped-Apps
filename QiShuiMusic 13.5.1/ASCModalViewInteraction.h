@interface ASCModalViewInteraction : NSObject
@property (nonatomic) ASCModalViewGestureRecognizer cancelGestureRecognizer;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) NSMutableArray observers;
@property (nonatomic) UIView view;
- (id)initWithView:;
- (void)dealloc;
- (void)setCancelBlock:;
- (id)view;
- (id)cancelBlock;
- (void).cxx_destruct;
- (id)observers;
- (void)invalidate;
- (void)cancelGestureDidChange:;
- (void)installWithCancelBlock:;
- (id)cancelGestureRecognizer;
- (void)setCancelGestureRecognizer:;
@end
