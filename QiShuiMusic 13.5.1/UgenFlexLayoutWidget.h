@interface UgenFlexLayoutWidget : UgenLayoutWidget
@property (nonatomic) q flexibility;
- (void)p_updateMargin:;
- (int)p_alignContent:;
- (void)p_updateHeight:;
- (void)setFlexibility:;
- (void)bindAttributeValue:forKey:;
- (void)didDisAppear;
- (long long)flexibility;
- (int)p_alignItems:;
- (int)p_alignSelf:;
- (void)p_configureFlexLayoutItem:;
- (void)p_configureFlexLayoutRoot;
- (int)p_flexDirection:;
- (int)p_flexWrap:;
- (int)p_justifyContent:;
- (void)p_updateWidth:;
- (void)updateHeight;
- (void)updateMargin;
- (void)updateWidth;
- (id)init;
- (void)layout;
- (void)didAppear;
- (void)render;
- (Class)containerViewClass;
@end
