@interface AVPairedDevice : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString pairedDeviceID;
@property (nonatomic) NSString modelID;
@property (nonatomic) BOOL playing;
@property (nonatomic) NSString productName;
- (id)productName;
- (id)ID;
- (BOOL)isPlaying;
- (void)dealloc;
- (id)modelID;
- (id)name;
- (id)initWithName:ID:modelID:playing:productName:;
- (id)pairedDeviceID;
+ (id)pairedDevicesConnectedToOutputDevice:;
@end
