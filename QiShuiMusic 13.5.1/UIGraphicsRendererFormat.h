@interface UIGraphicsRendererFormat : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
- (id)bounds;
- (id)copyWithZone:;
+ (id)preferredFormat;
+ (id)defaultFormat;
@end
