@interface SFEntityTopic : SFQueryTopic
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString query;
@property (nonatomic) NSInteger queryType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithType:identifier:;
- (void)setIdentifier:;
- (id)copyWithZone:;
- (id)initWithType:query:identifier:;
+ (BOOL)supportsSecureCoding;
@end
