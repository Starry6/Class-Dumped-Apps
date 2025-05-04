@interface AWENearbyGrouponCard : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) AWEAwemeModel awemeInfo;
@property (nonatomic) AWENearbyC2FeedNicolCardModel dynamicInfo;
@property (nonatomic) AWENearbyGrouponCardFrameAttr frameAttr;
@property (nonatomic) NSDictionary showStyle;
@property (nonatomic) NSDictionary ditoData;
@property (nonatomic) NSString feedCardUpdateReq;
- (id)awemeInfo;
- (void)setAwemeInfo:;
- (id)showStyle;
- (void)setDynamicInfo:;
- (void)setShowStyle:;
- (id)frameAttr;
- (id)feedCardUpdateReq;
- (id)ditoData;
- (void)setFrameAttr:;
- (void)setDitoData:;
- (void)setFeedCardUpdateReq:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)dynamicInfo;
+ (BOOL)automaticallyDefaultMapping;
@end
