@interface IESLiveFailEnterRoomModel : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSString logId;
@property (nonatomic) NSString failApi;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q clientErrorCode;
- (void)setExtraParams:;
- (id)failApi;
- (id)extraParams;
- (id)initWithClientErrorCode:;
- (id)logId;
- (void)setFailApi:;
- (void)setLogId:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (unsigned long long)clientErrorCode;
- (void)setClientErrorCode:;
@end
