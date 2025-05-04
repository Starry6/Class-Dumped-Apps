@interface AWEUserLoginBackgroundModel : NSObject
@property (nonatomic) AWEUserContext context;
@property (nonatomic) NSString halfScreenBgUrl;
@property (nonatomic) NSString halfScreenThemeId;
- (id)initFullScreenModelWithUserContext:;
- (id)initHalfScreenModelWithBgUrl:ThemeId:;
- (id)halfScreenBgUrl;
- (void)setHalfScreenBgUrl:;
- (id)halfScreenThemeId;
- (void)setHalfScreenThemeId:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
