@interface AWESettingStrategyProvider : NSObject
@property (nonatomic) NSString lastActiveSignature;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awemeSettingDidChange;
- (id)signatureFromStrategies:;
- (void)setLastActiveSignature:;
- (id)lastActiveSignature;
- (id)init;
- (void)dealloc;
- (long long)priority;
- (id)settingName;
- (void).cxx_destruct;
- (id)settingValue;
- (id)strategies;
@end
