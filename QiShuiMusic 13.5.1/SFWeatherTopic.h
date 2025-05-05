@interface SFWeatherTopic : SFQueryTopic
@property (nonatomic) SFLatLng location;
@property (nonatomic) NSString query;
@property (nonatomic) NSInteger queryType;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)location;
- (void)encodeWithCoder:;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithQuery:location:;
+ (BOOL)supportsSecureCoding;
@end
