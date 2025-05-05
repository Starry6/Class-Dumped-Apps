@interface BDXLynxFoldViewHeaderLight : LynxUI
@property (nonatomic) BOOL headerHeightChanged;
- (BOOL)headerHeightChanged;
- (BOOL)notifyParent;
- (void)setHeaderHeightChanged:;
- (void)updateFrame:withPadding:border:margin:withLayoutAnimation:;
- (id)createView;
+ (void)lynxLazyLoad;
@end
