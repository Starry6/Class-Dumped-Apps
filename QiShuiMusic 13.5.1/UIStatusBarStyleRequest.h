@interface UIStatusBarStyleRequest : NSObject
@property (nonatomic) NSNumber overrideHeight;
@property (nonatomic) q style;
@property (nonatomic) q legibilityStyle;
@property (nonatomic) UIColor foregroundColor;
@property (nonatomic) double foregroundAlpha;
- (BOOL)isDoubleHeight;
- (id)initWithStyle:legacy:legibilityStyle:foregroundColor:;
- (id)overrideHeight;
- (id)foregroundColor;
- (id)init;
- (long long)legibilityStyle;
- (BOOL)isLegacy;
- (id)_copyWithZone:class:;
- (unsigned long long)hash;
- (id)initWithStyle:legibilityStyle:foregroundColor:;
- (id)initWithStyle:legibilityStyle:foregroundColor:foregroundAlpha:overrideHeight:;
- (id)initWithStyle:legacy:legibilityStyle:foregroundColor:foregroundAlpha:;
- (void).cxx_destruct;
- (id)initWithStyle:legibilityStyle:foregroundColor:foregroundAlpha:;
- (double)foregroundAlpha;
- (BOOL)isTranslucent;
- (id)mutableCopyWithZone:;
- (long long)style;
- (id)initWithStyle:legibilityStyle:foregroundColor:overrideHeight:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
