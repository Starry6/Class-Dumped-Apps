@interface NSConcreteProtocolChecker : NSProtocolChecker
- (id)protocol;
- (void)dealloc;
- (id)initWithTarget:protocol:;
- (id)target;
@end
