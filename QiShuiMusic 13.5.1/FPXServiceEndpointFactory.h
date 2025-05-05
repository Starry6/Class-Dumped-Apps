@interface FPXServiceEndpointFactory : NSObject
- (void).cxx_destruct;
- (void)getListenerEndpointForServiceName:completionHandler:;
- (id)initWithServiceSources:domainContext:;
@end
