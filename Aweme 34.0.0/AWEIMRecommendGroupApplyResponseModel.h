@interface AWEIMRecommendGroupApplyResponseModel : NSObject
@property (nonatomic) AWEIMShareVerifyResponseModel groupVerifyResponseModel;
@property (nonatomic) AWEIMChatModel chatModel;
@property (nonatomic) AWEIMRecommendGroupItem recommendItem;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)chatModel;
- (void)setChatModel:;
- (id)groupVerifyResponseModel;
- (void)setGroupVerifyResponseModel:;
- (id)recommendItem;
- (void)setRecommendItem:;
- (long long)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
@end
