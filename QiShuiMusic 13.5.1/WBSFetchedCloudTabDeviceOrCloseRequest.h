@interface WBSFetchedCloudTabDeviceOrCloseRequest : NSObject
@property (nonatomic) NSString uuidString;
@property (nonatomic) NSDictionary deviceOrCloseRequestDictionary;
- (id)init;
- (id)uuidString;
- (id)initWithCoder:;
- (id)deviceOrCloseRequestDictionary;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithUUIDString:deviceOrCloseRequestDictionary:;
+ (BOOL)supportsSecureCoding;
@end
