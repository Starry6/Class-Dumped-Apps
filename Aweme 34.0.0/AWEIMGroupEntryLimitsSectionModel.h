@interface AWEIMGroupEntryLimitsSectionModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSArray settingModels;
@property (nonatomic) NSString title;
- (id)settingModels;
- (void)setSettingModels:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)modelWithType:settingModels:;
@end
