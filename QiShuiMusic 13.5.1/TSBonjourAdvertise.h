@interface TSBonjourAdvertise : NSObject
@property (nonatomic) <TSBonjourAdvertiseDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (BOOL)stopAdvertising;
- (id)delegate;
- (void).cxx_destruct;
- (void)registeredServiceWithName:regType:domain:withFlags:;
- (BOOL)startAdvertisingWithError:;
@end
