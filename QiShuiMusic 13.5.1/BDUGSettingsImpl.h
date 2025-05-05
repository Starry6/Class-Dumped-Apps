@interface BDUGSettingsImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)objectForKeyPath:defaultValue:stable:;
+ (id)sharedInstance;
@end
