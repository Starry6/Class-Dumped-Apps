@interface AVFlashlight : NSObject
@property (nonatomic) BOOL available;
@property (nonatomic) BOOL overheated;
@property (nonatomic) float flashlightLevel;
- (id)init;
- (void)dealloc;
- (void)_handleNotification:payload:;
- (BOOL)isAvailable;
- (void)_setupFlashlight;
- (BOOL)isOverheated;
- (float)flashlightLevel;
- (void)_teardownFlashlight;
- (BOOL)turnPowerOnWithError:;
- (void)turnPowerOff;
- (BOOL)setFlashlightLevel:withError:;
- (void)_reconnectToServer;
+ (BOOL)hasFlashlight;
@end
