@interface AWESearchAIGCSugData : NSObject
@property (nonatomic) double sugTimeInterval;
@property (nonatomic) NSString sugWord;
@property (nonatomic) NSString sessionID;
@property (nonatomic) BOOL isLocalResponse;
@property (nonatomic) AWESearchSugResponseModel responseModel;
@property (nonatomic) NSString requestLogID;
- (void)setRequestLogID:;
- (id)requestLogID;
- (BOOL)isLocalResponse;
- (id)sugWord;
- (double)sugTimeInterval;
- (void)setSugTimeInterval:;
- (void)setSugWord:;
- (void)setIsLocalResponse:;
- (void)setSessionID:;
- (id)sessionID;
- (void).cxx_destruct;
- (id)responseModel;
- (void)setResponseModel:;
@end
