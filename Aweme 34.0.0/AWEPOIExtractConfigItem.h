@interface AWEPOIExtractConfigItem : MTLModel
@property (nonatomic) double durationMin;
@property (nonatomic) double durationMax;
@property (nonatomic) q maxFrame;
@property (nonatomic) double fps;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)maxFrame;
- (double)durationMin;
- (double)durationMax;
- (void)setMaxFrame:;
- (void)setDurationMin:;
- (void)setDurationMax:;
- (double)fps;
- (void)setFps:;
+ (id)JSONKeyPathsByPropertyKey;
@end
