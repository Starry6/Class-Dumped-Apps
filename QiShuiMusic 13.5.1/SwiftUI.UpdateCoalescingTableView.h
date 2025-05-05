@interface SwiftUI.UpdateCoalescingTableView : UITableView
@property (nonatomic) BOOL sectionContentInsetFollowsLayoutMargins;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
- (void)layoutMarginsDidChange;
- (double)_alignedContentMarginGivenMargin:;
- (void)performBatchUpdates:completion:;
- (void)layoutSubviews;
- (id)initWithFrame:style:;
- (id)initWithCoder:;
- (id)sizeThatFits:;
- (void)setBounds:;
- (void).cxx_destruct;
- (id)bounds;
- (void)safeAreaInsetsDidChange;
- (BOOL)_sectionContentInsetFollowsLayoutMargins;
- (double)_rowSpacing;
- (void)_setSectionContentInsetFollowsLayoutMargins:;
+ (BOOL)_isInternalTableView;
@end
