@interface WBSCloudTabCloseRequest : NSObject
@property (nonatomic) NSUUID requestUUID;
@property (nonatomic) NSUUID destinationDeviceUUID;
@property (nonatomic) NSUUID tabUUID;
@property (nonatomic) NSURL url;
@property (nonatomic) NSDate lastModified;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (id)lastModified;
- (id)url;
- (id)requestUUID;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)initWithDictionary:requestUUID:;
- (id)initWithURL:tabUUID:lastModified:sourceDeviceUUID:destinationDeviceUUID:requestUUID:;
- (BOOL)matchesCloudTab:;
- (id)destinationDeviceUUID;
- (id)tabUUID;
+ (id)_dictionaryWithURL:tabUUID:lastModified:sourceDeviceUUID:destinationDeviceUUID:;
+ (BOOL)isCloudTabCloseRequestDictionary:;
+ (id)destinationDeviceUUIDInDictionary:;
@end
