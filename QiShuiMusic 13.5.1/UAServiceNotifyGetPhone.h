@interface UAServiceNotifyGetPhone : UAServiceGetPhone
- (id)notifyRequest;
- (void)notifyURLFromURLComponents:withPPLocation:;
- (void)serviceNetworkDisposedRedirectionResponse:;
- (void)startNotifyWithWapData:;
@end
