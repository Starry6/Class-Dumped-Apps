@interface LNPropertyMetadata : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) LNValueType valueType;
@property (nonatomic) LNStaticDeferredLocalizedString title;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)valueType;
- (BOOL)isEqual:;
- (id)initWithIdentifier:valueType:title:;
+ (BOOL)supportsSecureCoding;
@end
