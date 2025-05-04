@interface AWELiveVSVideoInfo : AWEBaseApiModel
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSString videoJson;
@property (nonatomic) NSString vid;
- (id)videoJson;
- (void)setVideoJson:;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)duration;
- (void)setVid:;
- (id)vid;
+ (id)JSONKeyPathsByPropertyKey;
@end
