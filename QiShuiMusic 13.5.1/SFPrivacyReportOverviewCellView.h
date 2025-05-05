@interface SFPrivacyReportOverviewCellView : UIView
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL usesInsetStyle;
@property (nonatomic) <SFPrivacyReportGridItemDelegate> delegate;
@property (nonatomic) Q gridPosition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)maxWidth;
- (void)setDelegate:;
- (void)setMaxWidth:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_updateLayoutMargins;
- (void)willMoveToWindow:;
- (void)setUsesInsetStyle:;
- (BOOL)usesInsetStyle;
- (unsigned long long)gridPosition;
- (void)setGridPosition:;
- (void)_updateHairlinesIfNeeded;
@end
