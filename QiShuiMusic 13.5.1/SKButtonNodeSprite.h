@interface SKButtonNodeSprite : SKSpriteNode
@property (nonatomic) NSObject<SKButtonNodeSpriteDelegate> delegate;
@property (nonatomic) SKAction downAction;
@property (nonatomic) SKAction upAction;
- (id)init;
- (void)touchesBegan:withEvent:;
- (void)setDelegate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)delegate;
- (void).cxx_destruct;
- (void)touchesEnded:withEvent:;
- (id)copyWithZone:;
- (id)upAction;
- (void)onTouchUpInside:;
- (void)touchBegan:location:;
- (void)touchMoved:location:;
- (void)touchEnded:location:;
- (void)onTouchUp:;
- (void)onTouchDownInside:;
- (id)downAction;
- (void)setDownAction:;
- (void)setUpAction:;
+ (BOOL)supportsSecureCoding;
+ (id)buttonWithFontNamed:;
@end
