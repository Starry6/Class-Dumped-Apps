@interface TTVideoEngineLoadInfo : NSObject
@property (nonatomic) q firstPts;
@property (nonatomic) q code;
- (long long)firstPts;
- (void)setFirstPts:;
- (long long)code;
- (void)setCode:;
@end
