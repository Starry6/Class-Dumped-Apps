@interface SBSStatusBarTapContextImpl : NSObject
@property (nonatomic) Q styleOverride;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)styleOverride;
- (id)initWithStyleOverride:;
- (void)setStyleOverride:;
+ (BOOL)supportsSecureCoding;
@end
