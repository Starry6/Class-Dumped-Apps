@interface AWEIMShareToSingleChatHelper : NSObject
+ (BOOL)saveUidWithShareContext:uid:;
+ (id)eventHandlerWithShareContext:;
+ (id)contentProviderWithShareContext:;
+ (id)uidWithShareContext:;
+ (Class)contentProviderWithShareTargetType:;
+ (Class)eventProviderWithShareTargetType:;
+ (void)uidWithShareContext:completion:;
+ (void)conversationIDWithShareContext:completion:;
@end
