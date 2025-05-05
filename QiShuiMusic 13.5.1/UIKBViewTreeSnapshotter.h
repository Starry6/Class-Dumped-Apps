@interface UIKBViewTreeSnapshotter : NSObject
@property (nonatomic) UIView snapshotView;
- (id)snapshotView;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)snapshotterForKeyboardView:afterScreenUpdates:;
@end
