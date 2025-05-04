@interface AWEIPhonePiPManager : NSObject
@property (nonatomic) BOOL externalPiPEnable;
- (void)setIPhonePiPDefaultState;
- (BOOL)externalPiPEnable;
- (void)setExternalPiPEnable:;
- (BOOL)iPhonePiPEnable;
- (void)updatePictureInPictureEnable;
- (id)init;
+ (id)shareInstance;
@end
