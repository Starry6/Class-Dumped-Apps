@interface AWEShareStudioSaveDraftChannel : AWEShareBaseChannel
@property (nonatomic) <ACCQuickStoryShareServiceProtocol> accService;
- (void)shareWithCompletion:;
- (BOOL)prepareToShare;
- (BOOL)isShareItemEnabled;
- (id)initWithACCService:;
- (void)setAccService:;
- (id)accService;
- (void).cxx_destruct;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
@end
