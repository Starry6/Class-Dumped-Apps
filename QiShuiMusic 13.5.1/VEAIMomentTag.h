@interface VEAIMomentTag : NSObject
@property (nonatomic) q identity;
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) float confidence;
- (void)setIdentity:;
- (float)confidence;
- (void)setConfidence:;
- (long long)identity;
- (void)setName:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
@end
