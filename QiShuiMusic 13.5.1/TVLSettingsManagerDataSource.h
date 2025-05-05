@interface TVLSettingsManagerDataSource : NSObject
@property (nonatomic) BOOL allowsSettingsAutoUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)allowsSettingsAutoUpdate;
- (void)setAllowsSettingsAutoUpdate:;
- (void)updateCurrentSettings;
- (id)init;
- (void)dealloc;
- (void)updateSettings:;
- (id)currentSettings;
+ (id)defaultDataSource;
@end
