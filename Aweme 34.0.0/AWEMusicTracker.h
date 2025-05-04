@interface AWEMusicTracker : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackEvent:params:;
+ (void)trackEvent:params:to:;
+ (void)trackSlardarEvent:params:moduleName:logType:;
@end
