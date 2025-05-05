@interface SFPrivacyReportOverviewView : SFPrivacyReportGridView
@property (nonatomic) BOOL usesInsetStyle;
- (double)interItemSpacing;
- (void).cxx_destruct;
- (void)setUsesInsetStyle:;
- (BOOL)usesInsetStyle;
- (BOOL)itemViewCanUseCompactWidth:;
- (BOOL)itemViewIsLineBreak:;
- (id)initWithPrivacyReportDataProvider:;
@end
