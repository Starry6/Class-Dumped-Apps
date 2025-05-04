@interface AWEPerfLoadCache : AWEPerfLoadCustom
@property (nonatomic) BOOL success;
- (void)endWithSuccess:atTime:;
- (void)endWithSuccess:beginTime:endTime:;
- (void)cancel;
- (BOOL)isSuccess;
@end
