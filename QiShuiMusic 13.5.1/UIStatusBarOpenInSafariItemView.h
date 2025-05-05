@interface UIStatusBarOpenInSafariItemView : UIStatusBarSystemNavigationItemView
@property (nonatomic) UISystemNavigationAction systemNavigationAction;
@property (nonatomic) NSString destinationText;
- (void).cxx_destruct;
- (BOOL)updateForNewData:actions:;
- (void)userDidActivateButton:;
- (id)shortenedTitleWithCompressionLevel:;
- (id)systemNavigationAction;
- (void)setSystemNavigationAction:;
- (id)destinationText;
- (void)setDestinationText:;
- (id)_displayStringFromURL:;
- (BOOL)layoutImageOnTrailingEdge;
- (id)_nominalTitleWithDestinationText:;
@end
