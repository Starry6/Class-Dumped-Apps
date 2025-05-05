@interface MCProfileWarning : NSObject
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSString localizedBody;
@property (nonatomic) BOOL isLongForm;
- (id)serializedDictionary;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)localizedTitle;
- (void)setLocalizedTitle:;
- (BOOL)isEqual:;
- (id)localizedBody;
- (void)setLocalizedBody:;
- (id)initWithLocalizedTitle:localizedBody:isLongForm:;
- (BOOL)isEqualToProfileWarning:;
- (BOOL)isLongForm;
- (void)setIsLongForm:;
+ (BOOL)supportsSecureCoding;
+ (id)warningWithLocalizedTitle:localizedBody:isLongForm:;
@end
