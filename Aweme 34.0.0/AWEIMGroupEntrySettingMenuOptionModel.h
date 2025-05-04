@interface AWEIMGroupEntrySettingMenuOptionModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString value;
@property (nonatomic) NSString type;
@property (nonatomic) NSString menuShortTitle;
@property (nonatomic) BOOL notRequired;
- (id)menuShortTitle;
- (void)setMenuShortTitle:;
- (void)setNotRequired:;
- (id)value;
- (void)setValue:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (BOOL)notRequired;
+ (id)JSONKeyPathsByPropertyKey;
@end
