@interface ASCPlaceholderOfferMetadata : ASCOfferMetadata
- (id)init;
- (BOOL)isPlaceholder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
