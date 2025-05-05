@interface LNDynamicOption : NSObject
@property (nonatomic) LNValue value;
@property (nonatomic) LNStaticDeferredLocalizedString title;
@property (nonatomic) LNStaticDeferredLocalizedString subtitle;
@property (nonatomic) LNImage image;
@property (nonatomic) q indentationLevel;
- (long long)indentationLevel;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)subtitle;
- (BOOL)isEqual:;
- (id)image;
- (id)copyWithZone:;
- (id)initWithValue:indentationLevel:;
+ (BOOL)supportsSecureCoding;
@end
