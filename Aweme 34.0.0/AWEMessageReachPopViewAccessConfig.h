@interface AWEMessageReachPopViewAccessConfig : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)antiAddictPopViewAccessEnable;
- (BOOL)popViewAccessEnable;
- (double)popViewKillAppTimeInterval;
- (BOOL)popViewKillAppUploadEnable;
- (double)popViewShowTimeOurInterval;
- (BOOL)popViewShowTimeOutUploadEnable;
+ (id)shareInstance;
@end
