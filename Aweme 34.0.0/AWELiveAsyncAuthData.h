@interface AWELiveAsyncAuthData : AWEBaseApiModel
@property (nonatomic) q asyncAuthenticationOperate;
@property (nonatomic) q asyncAuthenticationAbType;
@property (nonatomic) q keepAliveTimeStamp;
@property (nonatomic) q buffer;
- (long long)keepAliveTimeStamp;
- (void)setKeepAliveTimeStamp:;
- (long long)asyncAuthenticationOperate;
- (void)setAsyncAuthenticationOperate:;
- (long long)asyncAuthenticationAbType;
- (void)setAsyncAuthenticationAbType:;
- (long long)buffer;
- (void)setBuffer:;
@end
