@interface BDABidSDK : NSObject
@property (nonatomic) BDAThreadSafeDictionary parameters;
@property (nonatomic) <BDASDKBaseProtocol> hostInstance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addCommonParameters:;
- (id)bdaRequestForJSONWithURL:params:method:callback:;
- (id)checkCommonParamsWithKey:;
- (id)hostInstance;
- (void)setHostInstance:;
- (id)parameters;
- (void).cxx_destruct;
- (void)setParameters:;
+ (void)handleBidInfoWithResponse:error:httpResponse:siteCallback:unionCallBack:;
+ (id)sharedInstance;
@end
