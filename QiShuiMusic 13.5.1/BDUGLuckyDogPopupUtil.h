@interface BDUGLuckyDogPopupUtil : NSObject
@property (nonatomic) @? alertHandler;
- (id)alertHandler;
- (void)setAlertHandler:;
- (void).cxx_destruct;
+ (void)alert:;
+ (BOOL)enableFeedbackBypass;
+ (id)getGlobalBlockListOfType:;
+ (id)sharedInstance;
@end
