@interface PuzzleBeanFactory : NSObject
- (BOOL)bindClass:forProtocol:;
- (BOOL)bindObject:forProtocol:;
- (Class)getClassWithProtocol:;
- (id)prototypeObjectWithProtocol:context:;
- (id)serviceKeyWithProtocol:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
