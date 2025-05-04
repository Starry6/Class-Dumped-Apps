@interface AWESearchFPSBlockUtil : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) double blockTime;
@property (nonatomic) q cardGap;
- (double)blockTime;
- (long long)cardGap;
- (void)p_setPerfBlock;
- (id)init;
- (void)block;
- (BOOL)enabled;
@end
