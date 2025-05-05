@interface TTSAssistantAsset : NSObject
@property (nonatomic) NSArray supportedLanguages;
@property (nonatomic) NSString name;
@property (nonatomic) NSString identifier;
@property (nonatomic) q assistantGender;
@property (nonatomic) q assistantOrder;
@property (nonatomic) BOOL isCustom;
@property (nonatomic) NSString primaryLanguage;
@property (nonatomic) q gender;
@property (nonatomic) NSString description;
- (id)init;
- (id)supportedLanguages;
- (long long)gender;
- (id)primaryLanguage;
- (id)identifier;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (long long)assistantGender;
- (long long)assistantOrder;
- (BOOL)isCustom;
@end
