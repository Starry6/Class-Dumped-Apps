@interface IESIMMusicMVEditInfo : MTLModel
@property (nonatomic) q templateID;
@property (nonatomic) q startTime;
@property (nonatomic) q duration;
@property (nonatomic) double speed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)templateID;
- (void)setTemplateID:;
- (void)setSpeed:;
- (void)setStartTime:;
- (long long)startTime;
- (double)speed;
- (void)setDuration:;
- (long long)duration;
+ (id)JSONKeyPathsByPropertyKey;
@end
