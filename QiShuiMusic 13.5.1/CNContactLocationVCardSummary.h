@interface CNContactLocationVCardSummary : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString descriptiveLabel;
@property (nonatomic) NSString urlString;
- (id)urlString;
- (id)initWithData:error:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)descriptiveLabel;
- (id)initWithTitle:URLString:;
+ (BOOL)supportsSecureCoding;
@end
