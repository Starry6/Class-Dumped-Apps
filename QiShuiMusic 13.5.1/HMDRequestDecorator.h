@interface HMDRequestDecorator : NSObject
- (id)bdw_decorateRequest:;
- (void)bdw_decorateSchemeTask:;
- (void)bdw_decorateURLProtocolTask:;
@end
