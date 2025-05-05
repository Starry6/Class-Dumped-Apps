@interface AVOutputDeviceFrecentsReader : NSObject
@property (nonatomic) NSArray deviceIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)deviceIDs;
- (void)dealloc;
- (id)frecencyInfoForDeviceWithID:;
- (id)initWithFrecentsFilePath:error:;
@end
