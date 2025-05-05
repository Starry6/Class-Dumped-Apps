@interface CNUIAvatarLayoutItemConfiguration : NSObject
@property (nonatomic) double size;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double baseSize;
- (void)setX:;
- (void)setY:;
- (double)y;
- (double)x;
- (double)baseSize;
- (void)setSize:;
- (double)size;
- (void)updateLayer:inBounds:atIndex:isRTL:;
- (id)itemFrameInContainingBounds:isRTL:;
- (void)setBaseSize:;
- (id)initWithSize:x:y:baseSize:;
@end
