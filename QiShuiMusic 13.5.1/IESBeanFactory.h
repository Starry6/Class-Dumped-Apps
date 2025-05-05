@interface IESBeanFactory : NSObject
- (id)objectWithProtocol:;
- (id)prototypeObjectWithProtocol:;
- (BOOL)removeObject:forProtocol:;
- (id)serviceKeyWithProtocol:;
- (id)singletonObjectWithProtocol:;
- (BOOL)use:forProtocol:;
- (BOOL)useClass:forProtocol:;
- (BOOL)useProvider:forProtocol:;
- (id)init;
- (void).cxx_destruct;
@end
