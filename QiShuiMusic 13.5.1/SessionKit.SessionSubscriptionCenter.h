@interface SessionKit.SessionSubscriptionCenter : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)listenForActiveSessionsWithHandler:;
+ (id)shared;
@end
