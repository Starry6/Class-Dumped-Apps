@interface UITextFieldLabel : UILabel
@property (nonatomic) BOOL shouldRenderWithoutTextField;
- (BOOL)_shouldDrawUnderlinesLikeWebKit;
- (BOOL)shouldRenderWithoutTextField;
- (void)setShouldRenderWithoutTextField:;
- (void)_defaultDrawTextInRect:;
- (void)drawTextInRect:;
+ (id)defaultFont;
+ (id)_defaultAttributes;
@end
