@interface SwiftUI.UpdateCoalescingCollectionView : UICollectionView
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) BOOL canBecomeFirstResponder;
@property (nonatomic) BOOL _wantsConstraintBasedLayout;
- (id)initWithFrame:collectionViewLayout:;
- (void)performBatchUpdates:completion:;
- (void)setFrame:;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (id)frame;
- (BOOL)_wantsConstraintBasedLayout;
- (BOOL)canBecomeFirstResponder;
- (void)setBounds:;
- (void).cxx_destruct;
- (id)contentSize;
- (id)bounds;
- (void)setContentSize:;
- (void)safeAreaInsetsDidChange;
@end
