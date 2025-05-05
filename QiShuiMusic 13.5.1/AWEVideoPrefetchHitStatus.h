@interface AWEVideoPrefetchHitStatus : NSObject
@property (nonatomic) Q size;
@property (nonatomic) Q lifeTime;
- (unsigned long long)lifeTime;
- (void)setLifeTime:;
- (id)init;
- (void)setSize:;
- (unsigned long long)size;
@end
