@interface ASCEmptyOfferMetadata : ASCOfferMetadata
- (id)init;
- (BOOL)isEmpty;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
