@interface AWEPublishProductDetectPostCheckResponseModel : MTLModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSString token;
@property (nonatomic) NSString failToast;
@property (nonatomic) Q showType;
@property (nonatomic) q remainCount;
@property (nonatomic) NSString subtitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (long long)remainCount;
- (void)setRemainCount:;
- (id)failToast;
- (void)setFailToast:;
- (long long)statusCode;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (void)setToken:;
- (void)setStatusCode:;
- (id)token;
- (void)setShowType:;
- (unsigned long long)showType;
+ (id)JSONKeyPathsByPropertyKey;
@end
