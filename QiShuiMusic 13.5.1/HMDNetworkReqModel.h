@interface HMDNetworkReqModel : NSObject
@property (nonatomic) NSString requestURL;
@property (nonatomic) NSString method;
@property (nonatomic) NSDictionary headerField;
@property (nonatomic) <HMDJSONObjectProtocol> params;
@property (nonatomic) BOOL needEcrypt;
@property (nonatomic) BOOL isManualTriggered;
@property (nonatomic) NSData postData;
@property (nonatomic) BOOL isFromHermas;
- (void)setHeaderField:;
- (id)headerField;
- (BOOL)isFromHermas;
- (BOOL)isManualTriggered;
- (BOOL)needEcrypt;
- (void)setIsFromHermas:;
- (void)setIsManualTriggered:;
- (void)setNeedEcrypt:;
- (id)requestURL;
- (id)method;
- (void)setRequestURL:;
- (void).cxx_destruct;
- (void)setMethod:;
- (id)params;
- (id)postData;
- (void)setPostData:;
- (void)setParams:;
@end
