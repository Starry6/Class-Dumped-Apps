@interface MPAVAuxiliaryDevice : NSObject
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString modelIdentifier;
@property (nonatomic) BOOL playing;
- (id)productName;
- (id)uniqueID;
- (BOOL)isPlaying;
- (id)deviceName;
- (id)initWithDictionary:;
- (id)modelIdentifier;
- (void).cxx_destruct;
+ (id)otherConnectedDevicesFromRouteDescription:;
@end
