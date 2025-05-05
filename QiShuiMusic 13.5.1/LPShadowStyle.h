@interface LPShadowStyle : NSObject
@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (nonatomic) UIColor color;
@property (nonatomic) LPSize offset;
- (void)setRadius:;
- (void)setOffset:;
- (void)setOpacity:;
- (id)init;
- (void)setColor:;
- (double)radius;
- (double)opacity;
- (id)offset;
- (id)color;
- (void).cxx_destruct;
+ (id)cardHeadingIconShadow;
+ (id)collaborationPreviewShadow;
@end
