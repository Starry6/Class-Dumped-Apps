@interface BDUGByteDanceUnit : NSObject
@property (nonatomic) NSString code;
@property (nonatomic) NSString asciiName;
@property (nonatomic) NSNumber geoNameID;
@property (nonatomic) NSString localID;
@property (nonatomic) NSString name;
- (id)asciiName;
- (id)geoNameID;
- (id)initWithCode:asciiName:geoNameID:localID:name:;
- (void)setAsciiName:;
- (void)setGeoNameID:;
- (void)setName:;
- (id)code;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (void)setCode:;
- (id)localID;
- (id)copyWithZone:;
- (id)toJSON;
- (void)setLocalID:;
+ (id)unitWithDictionary:;
+ (BOOL)supportsSecureCoding;
@end
