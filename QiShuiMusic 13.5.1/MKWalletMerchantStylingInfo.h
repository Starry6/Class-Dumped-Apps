@interface MKWalletMerchantStylingInfo : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)imageForSize:scale:;
- (BOOL)isEqual:;
- (id)initWithStyleAttributes:;
- (id)_featureStyleAttributes;
- (id)imageForSize:scale:transparent:;
- (id)tintColorForScale:;
+ (BOOL)supportsSecureCoding;
@end
