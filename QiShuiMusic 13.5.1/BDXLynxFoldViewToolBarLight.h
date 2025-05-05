@interface BDXLynxFoldViewToolBarLight : LynxUI
@property (nonatomic) BOOL toolbarHeightChanged;
- (BOOL)notifyParent;
- (void)setToolbarHeightChanged:;
- (BOOL)toolbarHeightChanged;
- (void)updateFrame:withPadding:border:margin:withLayoutAnimation:;
- (id)createView;
+ (void)lynxLazyLoad;
@end
