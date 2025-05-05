@interface CADBirthdayListener : NSObject
@property (nonatomic) <CalBirthdayListener> ekBirthdayListener;
@property (nonatomic) # listenerClass;
- (id)init;
- (BOOL)birthdayCalendarEnabled;
- (void)start;
- (void)setEkBirthdayListener:;
- (void)setBirthdayCalendarEnabled:;
- (Class)listenerClass;
- (id)ekBirthdayListener;
- (void).cxx_destruct;
- (void)reset;
- (void)setListenerClass:;
+ (BOOL)birthdayCalendarEnabled;
+ (void)start;
+ (void)setBirthdayCalendarEnabled:;
+ (id)sharedListener;
+ (void)reset;
@end
