@interface FLEXDefaultsContentSection : FLEXCollectionContentSection
@property (nonatomic) NSUserDefaults defaults;
@property (nonatomic) NSArray keys;
@property (nonatomic) NSDictionary unexcludedDefaults;
@property (nonatomic) BOOL onlyShowKeysForAppPrefs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)title;
- (id)didPressInfoButtonAction:;
- (long long)accessoryTypeForRow:;
- (id)keys;
- (void)setKeys:;
- (id)unexcludedDefaults;
- (void)setOnlyShowKeysForAppPrefs:;
- (BOOL)onlyShowKeysForAppPrefs;
- (id)defaults;
- (void)setDefaults:;
- (void).cxx_destruct;
+ (id)forObject:;
+ (id)standard;
+ (id)forDefaults:;
@end
