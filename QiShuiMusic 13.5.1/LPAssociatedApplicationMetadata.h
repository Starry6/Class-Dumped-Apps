@interface LPAssociatedApplicationMetadata : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) LPImage icon;
@property (nonatomic) NSString caption;
@property (nonatomic) NSString action;
@property (nonatomic) q clipAction;
- (id)bundleIdentifier;
- (id)icon;
- (id)action;
- (id)caption;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setAction:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void)setCaption:;
- (void)setIcon:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)clipAction;
- (void)setClipAction:;
+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
@end
