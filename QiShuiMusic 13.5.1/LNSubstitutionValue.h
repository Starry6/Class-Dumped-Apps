@interface LNSubstitutionValue : NSObject
@property (nonatomic) NSUUID parameterIdentifier;
@property (nonatomic) NSString titleKey;
@property (nonatomic) LNStaticDeferredLocalizedString title;
@property (nonatomic) LNValue value;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)value;
- (id)titleKey;
- (id)parameterIdentifier;
- (id)initWithParameterIdentifier:title:titleKey:value:;
- (id)initWithTitle:titleKey:value:;
+ (BOOL)supportsSecureCoding;
@end
