@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView
@property (nonatomic) UISystemNavigationAction systemNavigationAction;
@property (nonatomic) NSString destinationText;
- (void).cxx_destruct;
- (BOOL)updateForNewData:actions:;
- (double)extraRightPadding;
- (long long)labelLineBreakMode;
- (void)userDidActivateButton:;
- (id)shortenedTitleWithCompressionLevel:;
- (id)systemNavigationAction;
- (void)setSystemNavigationAction:;
- (id)destinationText;
- (void)setDestinationText:;
@end
