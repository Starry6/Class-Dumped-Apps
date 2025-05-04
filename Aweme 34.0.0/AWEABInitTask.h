@interface AWEABInitTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)attachABTest;
+ (void)setupTunings;
+ (void)setupMPVolumeView;
+ (void)setupMPVolumeViewAlone;
+ (void)setupKeyboardStuffs;
+ (void)setupOnMemoryWarning;
+ (void)setupMetalCheck;
+ (void)setupLocalePreferredLanguages;
+ (void)execute;
@end
