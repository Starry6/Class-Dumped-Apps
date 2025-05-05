@interface AVVirtualCaptureCard : NSObject
@property (nonatomic) q capacity;
@property (nonatomic) q freeSpace;
- (long long)capacity;
- (id)init;
- (void)dealloc;
- (long long)freeSpace;
- (void)showSystemUserInterface;
- (BOOL)setCapacity:error:;
+ (BOOL)isVirtualCaptureCardSupported;
+ (id)sharedVirtualCaptureCard;
@end
