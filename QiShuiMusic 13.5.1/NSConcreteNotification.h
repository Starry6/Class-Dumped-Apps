@interface NSConcreteNotification : NSNotification
- (void)dealloc;
- (id)userInfo;
- (id)initWithName:object:userInfo:;
- (id)object;
- (id)name;
@end
