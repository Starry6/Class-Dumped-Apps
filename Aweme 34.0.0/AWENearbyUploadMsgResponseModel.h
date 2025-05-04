@interface AWENearbyUploadMsgResponseModel : MTLModel
@property (nonatomic) Q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSArray dataList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataList:;
- (id)statusMsg;
- (void)setStatusMsg:;
- (unsigned long long)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (id)dataList;
+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
