@interface AWEIMGroupEntrySettingMenuOptionModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString value;
@property (nonatomic) NSString type;
- (void)setType:;
- (void)setTitle:;
- (void)setValue:;
- (id)type;
- (id)title;
- (void).cxx_destruct;
- (id)value;
+ (id)JSONKeyPathsByPropertyKey;
@end
