@interface IESLiveBackendRequestResult : NSObject
@property (nonatomic) IESLiveBackendBizResp originBizResp;
@property (nonatomic) @ parsedData;
@property (nonatomic) HTSLivePBResponse_Header responseHeader;
@property (nonatomic) NSError error;
@property (nonatomic) double nativeTimeInterval;
@property (nonatomic) double serverTimeInterval;
- (double)nativeTimeInterval;
- (id)originBizResp;
- (double)serverTimeInterval;
- (void)setNativeTimeInterval:;
- (void)setOriginBizResp:;
- (void)setParsedData:;
- (void)setServerTimeInterval:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)parsedData;
- (id)responseHeader;
- (void)setResponseHeader:;
@end
