@interface AVOutputDeviceLegacyFrecentsWriter : NSObject
@property (nonatomic) q numberOfKeysToBeSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setFrecencyInfo:forDeviceID:;
- (void)removeFrecencyInfoForDeviceID:;
- (BOOL)persistToDiskReturningError:;
- (long long)numberOfKeysToBeSet;
+ (id)defaultFrecentsWriter;
@end
