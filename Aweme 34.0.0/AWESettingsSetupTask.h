@interface AWESettingsSetupTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)setupSettingsImpl;
+ (void)execute;
@end
