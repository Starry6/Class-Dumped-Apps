@interface DTRpcExceptionMXXT : NSException
@property (nonatomic) NSInteger code;
- (int)code;
- (void)setCode:;
+ (id)exceptionWithName:reason:userInfo:code:;
+ (void)raise:message:;
+ (void)raise:message:userInfo:;
@end
