@interface SFLocalTopic : SFTopic
@property (nonatomic) SFSearchResult result;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)result;
- (id)initWithResult:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (void)setResult:;
- (id)copyWithZone:;
- (id)normalizedTopic;
- (id)initWithResult:identifier:;
+ (BOOL)supportsSecureCoding;
@end
