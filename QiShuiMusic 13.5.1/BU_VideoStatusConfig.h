@interface BU_VideoStatusConfig : NSObject
@property (nonatomic) BOOL isLockScreen;
@property (nonatomic) BOOL isAllowLandscape;
@property (nonatomic) BOOL isLandscape;
- (BOOL)isAllowLandscape;
- (void)setIsAllowLandscape:;
- (void)setIsLockScreen:;
- (id)init;
- (void)dealloc;
- (BOOL)isLandscape;
- (void)setIsLandscape:;
- (BOOL)isLockScreen;
+ (id)sharedBrightnessView;
@end
