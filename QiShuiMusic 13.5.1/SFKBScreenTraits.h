@interface SFKBScreenTraits : UIKBScreenTraits
@property (nonatomic) BOOL sf_isKeyboardMinorEdgeWidth;
- (BOOL)isKeyboardMinorEdgeWidth;
- (BOOL)sf_isKeyboardMinorEdgeWidth;
- (void)setSf_isKeyboardMinorEdgeWidth:;
+ (id)traitsWithScreen:orientation:;
@end
