@interface UIStatusBarElectronicTollCollectionItemView : UIStatusBarItemView
- (void)setVisible:;
- (id)contentsImage;
- (BOOL)updateForNewData:actions:;
- (double)alphaForAvailable:;
@end
