@interface UIPasteControlConfiguration : NSObject
@property (nonatomic) BOOL _shouldLayoutSynchronously;
@property (nonatomic) Q displayMode;
@property (nonatomic) q cornerStyle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) UIColor baseForegroundColor;
@property (nonatomic) UIColor baseBackgroundColor;
- (void)setCornerStyle:;
- (void)setBaseForegroundColor:;
- (id)baseForegroundColor;
- (long long)cornerStyle;
- (void)setBaseBackgroundColor:;
- (id)baseBackgroundColor;
- (id)init;
- (unsigned long long)displayMode;
- (void)setDisplayMode:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (BOOL)_shouldLayoutSynchronously;
- (void)set_shouldLayoutSynchronously:;
+ (BOOL)supportsSecureCoding;
@end
