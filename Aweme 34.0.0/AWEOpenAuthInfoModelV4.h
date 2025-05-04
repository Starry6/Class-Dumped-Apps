@interface AWEOpenAuthInfoModelV4 : MTLModel
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) <AWEOpenAuthInfoOpenDataProtocol> openData;
@property (nonatomic) NSString requestID;
- (id)logPassback;
- (void)setLogPassback:;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)openData;
- (void)setOpenData:;
- (id)timestamp;
- (id)statusCode;
- (id)requestID;
- (void)setRequestID:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)openDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
