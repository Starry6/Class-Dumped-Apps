@interface AWEDCFeedDislikeViewController : AWEDoubleColumnDislikeViewController
@property (nonatomic) <AWEDCFeedDislikeVCDelegate> delegate;
@property (nonatomic) Q themeStyle;
- (void)setThemeStyle:;
- (Class)headerClass;
- (BOOL)enableUpdateWithHelper;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (Class)collectionViewCellClass;
- (void).cxx_destruct;
- (void)setDelegate:;
- (unsigned long long)themeStyle;
@end
