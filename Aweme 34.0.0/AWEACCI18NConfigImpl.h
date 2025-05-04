@interface AWEACCI18NConfigImpl : NSObject
@property (nonatomic) NSString currentLanguage;
@property (nonatomic) NSString currentRegion;
@property (nonatomic) NSString defaultLanguage;
@property (nonatomic) NSBundle languageBundle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)appRegionDidChange;
- (id)currentRegion;
- (void)setCurrentRegion:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)currentLanguage;
- (void)setCurrentLanguage:;
@end
