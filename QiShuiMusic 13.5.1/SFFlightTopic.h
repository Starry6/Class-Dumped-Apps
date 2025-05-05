@interface SFFlightTopic : SFQueryTopic
@property (nonatomic) NSDate date;
@property (nonatomic) NSString query;
@property (nonatomic) NSInteger queryType;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDate:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithQuery:date:;
+ (BOOL)supportsSecureCoding;
@end
