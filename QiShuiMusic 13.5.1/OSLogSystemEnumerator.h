@interface OSLogSystemEnumerator : OSLogEnumerator
- (void)_handleInvalidation;
- (id)nextObject;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEventStream:options:position:;
- (void)_handleEventProxy:;
@end
