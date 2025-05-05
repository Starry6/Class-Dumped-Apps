@interface SFQueryTopic : SFTopic
@property (nonatomic) NSString query;
@property (nonatomic) NSInteger queryType;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setQuery:;
- (id)query;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (int)queryType;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setQueryType:;
- (id)initWithType:query:;
- (id)initWithType:query:identifier:;
+ (BOOL)supportsSecureCoding;
@end
