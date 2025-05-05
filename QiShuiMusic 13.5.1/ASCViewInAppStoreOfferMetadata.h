@interface ASCViewInAppStoreOfferMetadata : ASCOfferMetadata
@property (nonatomic) NSString title;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)title;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isViewInAppStore;
+ (BOOL)supportsSecureCoding;
@end
