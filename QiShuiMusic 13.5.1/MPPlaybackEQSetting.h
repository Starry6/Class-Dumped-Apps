@interface MPPlaybackEQSetting : NSObject
@property (nonatomic) q preset;
@property (nonatomic) NSInteger avPreset;
@property (nonatomic) NSString name;
@property (nonatomic) NSString localizedName;
- (id)localizedName;
- (long long)preset;
- (id)name;
- (id)copyWithZone:;
- (id)_initWithPreset:;
- (int)avPreset;
+ (id)allSettings;
+ (id)settingWithName:;
+ (id)settingWithPreset:;
@end
