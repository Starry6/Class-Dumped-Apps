@interface SFLatLng : NSObject
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLng:;
- (double)lat;
- (void)setLat:;
- (double)lng;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (BOOL)hasLat;
- (BOOL)hasLng;
+ (BOOL)supportsSecureCoding;
@end
