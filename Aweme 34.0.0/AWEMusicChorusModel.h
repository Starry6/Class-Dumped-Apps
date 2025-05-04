@interface AWEMusicChorusModel : AWEBaseApiModel
@property (nonatomic) q startTime;
@property (nonatomic) q duration;
- (void)setStartTime:;
- (void)setDuration:;
- (long long)duration;
- (long long)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
