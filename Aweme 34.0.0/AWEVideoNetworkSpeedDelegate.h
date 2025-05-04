@interface AWEVideoNetworkSpeedDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)getNetworkSpeedKBPerSec;
+ (id)sharedInstance;
@end
