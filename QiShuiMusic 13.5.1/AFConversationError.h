@interface AFConversationError : NSError
- (id)initWithCode:userInfo:;
- (id)initWithCode:localizedFailureReason:;
- (id)initWithCode:;
+ (id)errorWithCode:;
+ (id)errorWithCode:userInfo:;
+ (id)errorWithCode:localizedFailureReason:;
@end
