@interface HTSEffectContext : NSObject
@property (nonatomic) NSMutableDictionary pathInfo;
@property (nonatomic) NSMutableDictionary intensityInfo;
- (id)intensityInfo;
- (id)pathInfo;
- (void)setIntensityInfo:;
- (void)setPathInfo:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
