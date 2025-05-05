@interface OspreyAnalytics : NSObject
- (void)reportEvent:payload:;
- (void)reportConnectionMetrics:;
- (void)reportAbsintheMetrics:;
- (void)reportHttpStatus:grpcStatus:forURL:;
- (void)reportError:forURL:;
- (void)_addURL:toContext:;
+ (id)reporter;
@end
