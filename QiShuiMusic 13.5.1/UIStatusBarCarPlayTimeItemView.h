@interface UIStatusBarCarPlayTimeItemView : UIStatusBarButtonActionItemView
- (long long)textStyle;
- (id)contentsImage;
- (void).cxx_destruct;
- (BOOL)updateForNewData:actions:;
- (double)neededSizeForImageSet:;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (id)_timeImageSet;
- (id)_timeImageSetForColor:;
@end
