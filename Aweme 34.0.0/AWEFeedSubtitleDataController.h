@interface AWEFeedSubtitleDataController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)requestSubtitleWithModel:languageID:completion:;
+ (void)setupSelectedLanguageID:;
+ (void)trackChangeSubtitleStatusWithEnterMethod:enterFrom:model:toStatus:fromLanguage:toLanguage:;
@end
