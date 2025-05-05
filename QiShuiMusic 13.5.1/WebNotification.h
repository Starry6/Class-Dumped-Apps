@interface WebNotification : NSObject
- (id)tag;
- (id)init;
- (unsigned long long)notificationID;
- (void)dealloc;
- (id)body;
- (id)origin;
- (void)finalize;
- (id)title;
- (id)iconURL;
- (id)lang;
- (id)dir;
- (void)dispatchShowEvent;
- (void)dispatchCloseEvent;
- (void)dispatchClickEvent;
- (void)dispatchErrorEvent;
@end
