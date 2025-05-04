@interface AWECodeGenOriginalLanguageInfoModel : AWEBaseDataModel
@property (nonatomic) BOOL canTranslateRealtime;
@property (nonatomic) NSString languageCode;
@property (nonatomic) NSInteger languageId;
@property (nonatomic) NSString lang;
- (int)languageId;
- (void)setLanguageId:;
- (id)languageCode;
- (void)setLanguageCode:;
- (void).cxx_destruct;
- (id)lang;
- (void)setLang:;
- (BOOL)canTranslateRealtime;
- (void)setCanTranslateRealtime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
