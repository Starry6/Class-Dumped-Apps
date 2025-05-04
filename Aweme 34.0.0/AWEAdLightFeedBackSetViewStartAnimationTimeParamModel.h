@interface AWEAdLightFeedBackSetViewStartAnimationTimeParamModel : BDXBridgeModel
@property (nonatomic) double height;
@property (nonatomic) double duration;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL disableAutoShow;
@property (nonatomic) NSNumber time;
@property (nonatomic) NSNumber milliSecond;
- (void)setEnterMethod:;
- (id)enterMethod;
- (BOOL)disableAutoShow;
- (void)setDisableAutoShow:;
- (id)milliSecond;
- (void)setMilliSecond:;
- (id)time;
- (void)setTime:;
- (void)setHeight:;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
- (double)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
