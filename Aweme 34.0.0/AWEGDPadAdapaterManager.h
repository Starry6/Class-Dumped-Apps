@interface AWEGDPadAdapaterManager : NSObject
@property (nonatomic) double padScreenWidth;
@property (nonatomic) BOOL enablePadAdapter;
@property (nonatomic) BOOL enableMobileAdapter;
@property (nonatomic) BOOL isPad;
- (BOOL)isPadDevice;
- (id)aAWEPadBizUIAdapter;
- (BOOL)didHitPadAdapater;
- (void)resetPadScreenWidth;
- (void)updatePadScreenWidthForSplitScreen:;
- (void)updatePadScreenWidth:;
- (double)padScreenWidth;
- (id)appendPadAdapterParams:;
- (void)setPadScreenWidth:;
- (void)setEnablePadAdapter:;
- (void)setEnableMobileAdapter:;
- (BOOL)enableMobileAdapter;
- (BOOL)enablePadAdapter;
- (BOOL)didHitMobileAdapater;
- (void)setIsPad:;
- (BOOL)isPad;
+ (Class)aAWEPadBizUIAdapterClass;
+ (id)sharedManager;
@end
