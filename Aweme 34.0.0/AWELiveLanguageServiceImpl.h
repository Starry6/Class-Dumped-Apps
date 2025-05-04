@interface AWELiveLanguageServiceImpl : NSObject
@property (nonatomic) RACSubject languageSubject;
@property (nonatomic) RACSubject interfaceLanguageSubject;
@property (nonatomic) RACSignal languageChanged;
@property (nonatomic) RACSignal interfaceLC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentInterfaceLC;
- (id)languageSubject;
- (id)interfaceLanguageSubject;
- (id)interfaceLC;
- (id)hostCurrentLanguageCode;
- (void)disableHostLocalizations:;
- (void)enableHostRTLFlipForView:;
- (void)setLanguageSubject:;
- (void)setInterfaceLanguageSubject:;
- (id)currentRegion;
- (void)dealloc;
- (id)locale;
- (id)currentLanguageCode;
- (void).cxx_destruct;
- (id)languageChanged;
@end
