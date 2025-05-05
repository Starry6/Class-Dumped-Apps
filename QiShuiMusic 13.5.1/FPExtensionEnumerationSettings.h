@interface FPExtensionEnumerationSettings : FPEnumerationSettings
@property (nonatomic) FPItemID enumeratedItemID;
@property (nonatomic) BOOL presenterEnumeration;
@property (nonatomic) BOOL wantsDirectExtensionEnumeration;
- (BOOL)wantsDirectExtensionEnumeration;
- (id)enumeratedItemID;
- (id)initWithCoder:;
- (void)setEnumeratedItemID:;
- (void)encodeWithCoder:;
- (BOOL)isPresenterEnumeration;
- (void)setPresenterEnumeration:;
- (void)setWantsDirectExtensionEnumeration:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
