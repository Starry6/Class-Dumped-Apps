@interface AWEAdLightFeedBackGetAdConvertInfoResultModel : BDXBridgeModel
@property (nonatomic) NSNumber adID;
@property (nonatomic) NSNumber creativeID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString lynxRawData;
- (void)setLogExtra:;
- (id)logExtra;
- (id)adID;
- (void)setAdID:;
- (void)setCreativeID:;
- (id)lynxRawData;
- (void)setLynxRawData:;
- (void).cxx_destruct;
- (id)creativeID;
+ (id)JSONKeyPathsByPropertyKey;
@end
