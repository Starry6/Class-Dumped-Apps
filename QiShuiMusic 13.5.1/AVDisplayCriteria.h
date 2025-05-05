@interface AVDisplayCriteria : NSObject
@property (nonatomic) float refreshRate;
@property (nonatomic) NSInteger videoDynamicRange;
- (void)dealloc;
- (float)refreshRate;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRefreshRate:videoDynamicRange:;
- (int)videoDynamicRange;
@end
