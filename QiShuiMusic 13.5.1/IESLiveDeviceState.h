@interface IESLiveDeviceState : NSObject
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isPortrait;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)deviceOrientChange;
- (BOOL)isPortrait;
- (BOOL)isLandscape;
- (void)setIsLandscape:;
- (void)setIsPortrait:;
- (void)startMonitor;
+ (id)sharedInstance;
@end
