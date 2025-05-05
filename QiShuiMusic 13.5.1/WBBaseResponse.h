@interface WBBaseResponse : WBDataTransferObject
@property (nonatomic) NSString requestID;
@property (nonatomic) NSString responseID;
@property (nonatomic) NSDictionary requestUserInfo;
@property (nonatomic) q statusCode;
- (id)requestUserInfo;
- (id)responseID;
- (void)setRequestUserInfo:;
- (void)setResponseID:;
- (void)storeToDictionary:;
- (id)validateAfterReceive;
- (id)validateBeforeSend;
- (void)setStatusCode:;
- (id)objectID;
- (void)setObjectID:;
- (id)init;
- (long long)statusCode;
- (id)requestID;
- (void).cxx_destruct;
- (void)setRequestID:;
- (void)loadFromDictionary:;
+ (id)mappedObjectWithDictionary:;
+ (id)objectFormSchemeUrl:sdkID:sdkVersion:;
+ (id)objectFromPasteboardWithID:sdkVersion:url:;
+ (void)nothing;
+ (id)response;
+ (id)transferType;
@end
