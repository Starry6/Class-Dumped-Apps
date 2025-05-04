@interface AWEIMTaskCardRequest : NSObject
+ (void)requestTaskCardEntranceComplete:;
+ (id)requestTaskCardListDetailParam:onComplete:;
+ (void)requestDeleteTaskConversationParam:onComplete:;
+ (void)setTaskPlatformMuteStateParam:onComplete:;
@end
