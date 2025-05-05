@interface AVClusterComponentOutputDeviceDescription : NSObject
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString deviceID;
@property (nonatomic) q deviceType;
@property (nonatomic) q deviceSubType;
@property (nonatomic) BOOL isClusterLeader;
@property (nonatomic) NSString modelID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)deviceType;
- (long long)deviceSubType;
- (BOOL)isClusterLeader;
- (void)dealloc;
- (id)deviceName;
- (id)modelID;
- (id)deviceID;
- (id)initWithDeviceID:deviceName:deviceSubType:isClusterLeader:modelID:;
@end
