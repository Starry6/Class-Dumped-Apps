@interface BWSensorConfiguration : NSObject
@property (nonatomic) NSString portType;
@property (nonatomic) NSString sensorIDString;
@property (nonatomic) NSDictionary sensorIDDictionary;
@property (nonatomic) NSDictionary cameraInfo;
- (id)portType;
- (void)dealloc;
- (id)description;
- (id)sensorIDString;
- (id)sensorIDDictionary;
- (id)initWithPortType:sensorIDString:sensorIDDictionary:cameraInfo:;
- (id)cameraInfo;
@end
