@interface AWEAdLightFeedBackUpdateLynxViewWithHeightParamModel : BDXBridgeModel
@property (nonatomic) double height;
@property (nonatomic) double duration;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSDictionary appendAdExtraData;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)appendAdExtraData;
- (void)setAppendAdExtraData:;
- (void)setHeight:;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
- (double)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
