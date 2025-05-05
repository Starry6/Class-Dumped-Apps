@interface IESECLiveAPIClientResult : NSObject
@property (nonatomic) IESECLiveAPIClientRequest request;
@property (nonatomic) @ model;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary monitorParams;
@property (nonatomic) IESECHTTPRequest originRequest;
@property (nonatomic) IESECHTTPClientRequestResult originResult;
- (id)monitorParams;
- (id)originRequest;
- (id)originResult;
- (void)setMonitorParams:;
- (void)setOriginRequest:;
- (void)setOriginResult:;
- (id)model;
- (void)setModel:;
- (void)setError:;
- (id)error;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
@end
