@interface AWEProfileEditFlowLocationSelectResult : NSObject
@property (nonatomic) AWEProfileLocationSegment country;
@property (nonatomic) AWEProfileLocationSegment province;
@property (nonatomic) AWEProfileLocationSegment city;
@property (nonatomic) AWEProfileLocationSegment district;
- (void)setProvince:;
- (id)province;
- (id)country;
- (id)city;
- (id)displayString;
- (void).cxx_destruct;
- (void)setCity:;
- (void)setCountry:;
- (id)copyWithZone:;
- (void)setDistrict:;
- (id)district;
@end
