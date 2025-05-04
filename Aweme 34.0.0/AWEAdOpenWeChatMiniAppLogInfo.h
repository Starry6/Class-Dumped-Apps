@interface AWEAdOpenWeChatMiniAppLogInfo : NSObject
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString adEventName;
@property (nonatomic) NSNumber creativeID;
@property (nonatomic) NSNumber adID;
@property (nonatomic) NSDictionary adExtraData;
@property (nonatomic) NSString refer;
@property (nonatomic) BOOL isFromAdLandingPage;
@property (nonatomic) AWEOriginalAdModel adModel;
- (void)setLogExtra:;
- (id)logExtra;
- (id)adExtraData;
- (void)setAdExtraData:;
- (id)adEventName;
- (void)setAdEventName:;
- (id)adID;
- (void)setAdID:;
- (void)setCreativeID:;
- (void)setRefer:;
- (id)refer;
- (id)adModel;
- (void)setAdModel:;
- (void)setIsFromAdLandingPage:;
- (BOOL)isFromAdLandingPage;
- (void).cxx_destruct;
- (id)creativeID;
+ (id)createLogInfoWithAdModel:adEventName:refer:adExtraData:;
@end
