@interface AWEPerfLoadCustom : AWEPerfLoadObject
- (void)endWithSuccess:atTime:;
- (void)endWithSuccess:beginTime:endTime:;
- (void)beginAtTime:;
- (id)initWithCustomKind:;
- (void)endWithSuccess:;
- (void)begin;
- (void)cancel;
@end
