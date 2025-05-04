@interface AWETheaterMoreFeedRequestModel : AWEBaseApiModel
@property (nonatomic) q offset;
@property (nonatomic) q count;
@property (nonatomic) BOOL isSpringFestivalTask;
@property (nonatomic) q appletOffset;
- (BOOL)isSpringFestivalTask;
- (void)setAppletOffset:;
- (long long)appletOffset;
- (void)setIsSpringFestivalTask:;
- (id)init;
- (void)setCount:;
- (void)setOffset:;
- (long long)offset;
- (long long)count;
@end
