@interface AWESearchSynthesisNovelTracker : NSObject
@property (nonatomic) NSString originURL;
@property (nonatomic) NSDictionary schemaParams;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) BOOL toolBarShowHasTracked;
- (id)commonParams;
- (void)setCommonParams:;
- (id)schemaParams;
- (void)setSchemaParams:;
- (BOOL)toolBarShowHasTracked;
- (void)setToolBarShowHasTracked:;
- (void)trackToolBarShow;
- (void)trackToolBarClick:;
- (void)trackCatalogShow;
- (void)trackCatalogClick:;
- (void)trackProgressDialogShow;
- (void)trackProgressDialogClick:;
- (void)trackWebTranscodeFail:;
- (void)trackWebNovelPageShow:;
- (void)trackReaderContentPageShow:isPreload:;
- (void).cxx_destruct;
- (id)originURL;
- (void)setOriginURL:;
@end
