@interface AWERVLVLanguageElement : AWERVVideoInfoBaseElement
@property (nonatomic) AWERVLVLanguageView languageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)languageView;
- (BOOL)isSupportMultiLanguage;
- (long long)getCurrentLanguageIndex;
- (void)trackLongVideoShowWithLanguageIndex:;
- (void)setLanguageView:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
