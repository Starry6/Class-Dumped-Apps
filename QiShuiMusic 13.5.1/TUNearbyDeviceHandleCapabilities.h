@interface TUNearbyDeviceHandleCapabilities : NSObject
@property (nonatomic) NSString sourceVersion;
@property (nonatomic) BOOL avLessCapable;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)sourceVersion;
- (id)copyWithZone:;
- (id)initWithSourceVersion:;
- (BOOL)isAVLessCapable;
+ (BOOL)supportsSecureCoding;
@end
