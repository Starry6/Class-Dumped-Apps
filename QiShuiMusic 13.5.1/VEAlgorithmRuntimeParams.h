@interface VEAlgorithmRuntimeParams : NSObject
@property (nonatomic) q mode;
@property (nonatomic) q serviceIndex;
@property (nonatomic) BOOL isCancel;
- (long long)serviceIndex;
- (void)setServiceIndex:;
- (long long)mode;
- (void)setMode:;
- (BOOL)isCancel;
- (void)setIsCancel:;
@end
