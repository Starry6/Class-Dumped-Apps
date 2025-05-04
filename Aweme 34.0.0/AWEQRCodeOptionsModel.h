@interface AWEQRCodeOptionsModel : AWEBaseApiModel
@property (nonatomic) Q codeType;
@property (nonatomic) BOOL enableShare;
@property (nonatomic) BOOL enableDragToClose;
@property (nonatomic) AWEShareContext shareContext;
@property (nonatomic) UIViewController fromController;
@property (nonatomic) NSDictionary trackDict;
- (void)setShareContext:;
- (id)shareContext;
- (void)setEnableShare:;
- (void)setFromController:;
- (void)setEnableDragToClose:;
- (void)setTrackDict:;
- (BOOL)enableShare;
- (BOOL)enableDragToClose;
- (id)fromController;
- (id)trackDict;
- (void).cxx_destruct;
- (unsigned long long)codeType;
- (void)setCodeType:;
@end
