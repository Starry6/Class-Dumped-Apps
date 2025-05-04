@interface AWEACCLanguageImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)formatedNumber:;
- (id)localizedStringWithFormat:defaultTranslation:parameters:;
- (id)localizedStringWithStr:defaultTranslation:;
- (id)localizedStringWithFormat:defaultTranslation:;
- (void)disableLocalizationsOfObj:;
- (id)pluralizedStringWithString:count:;
@end
