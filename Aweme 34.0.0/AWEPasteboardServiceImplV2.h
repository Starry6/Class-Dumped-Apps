@interface AWEPasteboardServiceImplV2 : HTSService
@property (nonatomic) @? hintCompleteBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getPasteboardContentWithCert:completion:;
- (void)getPasteboardItemsWithCert:completion:;
- (BOOL)canAutoreadPasteboardContent;
- (void)updateCanAutoreadPasteboardContent:;
- (void)requestAutoreadPasteboardContentPermission:enterFrom:;
- (void)hintForAutoreadPasteboardPermission:;
- (void)showAutoreadPasteboardPermissionCard:;
- (void)hintForAutoreadPasteboardPermissionFinish:;
- (BOOL)p_canShowPasteboardSettingGuideView;
- (void)setHintCompleteBlock:;
- (id)hintCompleteBlock;
- (id)__getStringWithCert:error:;
- (id)__getItemsWithCert:error:;
- (BOOL)__enableAutoReadPasteboardWithCert:;
- (BOOL)__isCertInAllowList:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
