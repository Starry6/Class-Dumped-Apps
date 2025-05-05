@interface PTYApplogHooker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)applogEventAdaptCfgDict;
- (BOOL)handleAdaptOnCustomEventKey:params:;
- (void)hookAppLogEvents;
- (void)onCustomEventKey:parameter:;
- (void)onEventV3:parameter:;
+ (id)pty_eventPrams:eventIndex:;
+ (void)pty_tt_trackCustomKey:withEvent:;
+ (id)sharedInstance;
+ (id)getSessionId;
+ (void)setup:;
+ (void)hook;
@end
