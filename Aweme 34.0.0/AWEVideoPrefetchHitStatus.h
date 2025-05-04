@interface AWEVideoPrefetchHitStatus : NSObject
@property (nonatomic) Q size;
@property (nonatomic) Q lifeTime;
- (void)setLifeTime:;
- (unsigned long long)lifeTime;
- (id)init;
- (unsigned long long)size;
- (void)setSize:;
@end
