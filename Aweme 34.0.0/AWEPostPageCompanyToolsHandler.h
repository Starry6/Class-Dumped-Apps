@interface AWEPostPageCompanyToolsHandler : NSObject
@property (nonatomic) q requestState;
@property (nonatomic) NSMutableDictionary shownBubbleToolMenuKeys;
@property (nonatomic) BOOL shouldShowCompanyTools;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (BOOL)shouldShowCompanyTools;
- (void)requestCompanyTools;
- (void)saveCompanyToolShownInfo;
- (id)trackCompanyToolsParams;
- (void)recordShownBubbleTool:;
- (id)shownBubbleToolMenuKeys;
- (void)setShownBubbleToolMenuKeys:;
- (void)setRequestState:;
- (long long)requestState;
- (void).cxx_destruct;
- (id)context;
+ (void)_aweLazyRegisterPostPage;
@end
