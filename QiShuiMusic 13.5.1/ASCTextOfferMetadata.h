@interface ASCTextOfferMetadata : ASCOfferMetadata
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)subtitle;
- (BOOL)isEqual:;
- (id)initWithTitle:subtitle:;
- (BOOL)isText;
+ (BOOL)supportsSecureCoding;
@end
