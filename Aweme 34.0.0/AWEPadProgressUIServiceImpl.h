@interface AWEPadProgressUIServiceImpl : NSObject
@property (nonatomic) {?=dddddddd} progressUIConfig;
@property (nonatomic) {?=dd} hotZoneConfig;
@property (nonatomic) BOOL hotZoneOptEnable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hotZoneOptEnable;
- (id)hotZoneConfig;
- (id)progressUIConfig;
- (void)performProgressUIOptimizeBlock:;
- (void)performProgressHotZoneOptimizeBlock:;
- (void)setProgressUIConfig:;
- (void)setHotZoneConfig:;
- (void)setHotZoneOptEnable:;
- (id)init;
+ (BOOL)optimizeEnable;
+ (id)sharedInstance;
@end
