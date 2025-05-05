@interface WFIcon : NSObject
@property (nonatomic) BOOL hasClearBackground;
@property (nonatomic) BOOL hasTransparentBackground;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (BOOL)hasClearBackground;
- (BOOL)hasTransparentBackground;
+ (BOOL)supportsSecureCoding;
@end
