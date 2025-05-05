@interface IESECListKitDynamicResponseModel : NSObject
@property (nonatomic) NSString apiKey;
@property (nonatomic) NSDictionary paramsFromClient;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL isMain;
@property (nonatomic) @ responseData;
- (id)paramsFromClient;
- (void)setIsMain:;
- (void)setParamsFromClient:;
- (void)setResponseData:;
- (void)setError:;
- (id)responseData;
- (id)error;
- (void).cxx_destruct;
- (BOOL)isMain;
- (void)setApiKey:;
- (id)apiKey;
+ (id)responseModelWithData:error:;
@end
