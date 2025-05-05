@interface AVOutputDeviceLegacyFrecentsReader : NSObject
@property (nonatomic) NSArray deviceIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deviceIDs;
- (id)frecencyInfoForDeviceWithID:;
+ (id)defaultFrecentsReader;
@end
