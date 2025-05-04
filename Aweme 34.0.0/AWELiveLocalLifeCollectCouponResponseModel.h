@interface AWELiveLocalLifeCollectCouponResponseModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSNumber resultCode;
@property (nonatomic) NSString resultMsg;
@property (nonatomic) NSDictionary collectPopWindow;
@property (nonatomic) NSDictionary extraLog;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (id)extraLog;
- (void)setStatusMsg:;
- (id)resultMsg;
- (void)setResultMsg:;
- (void)setExtraLog:;
- (id)collectPopWindow;
- (void)setCollectPopWindow:;
- (id)statusCode;
- (id)resultCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (void)setResultCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
