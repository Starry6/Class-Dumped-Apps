@interface AWEMusicMVEditInfo : MTLModel
@property (nonatomic) q templateID;
@property (nonatomic) q startTime;
@property (nonatomic) q duration;
@property (nonatomic) double speed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSpeed:;
- (double)speed;
- (void)setStartTime:;
- (long long)templateID;
- (void)setDuration:;
- (void)setTemplateID:;
- (long long)duration;
- (long long)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
