@interface AWEIMMessageListFormatSearchBrandADComponent : AWEIMComponentBase
@property (nonatomic) NSDictionary chatExtra;
@property (nonatomic) NSDictionary extraBrandADInfo;
@property (nonatomic) NSDictionary extraImgClickInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createBtmChainWithBtmInfo:clickedView:enterNewPage:addBtmChain:chainLength:targetPages:;
- (BOOL)isFromSearchBrandAD;
- (void)trackADEventWithContextBuildBlock:;
- (void)routeToAdLandingPageWithParams:;
- (void)componentDidMounted:;
- (id)chatExtra;
- (void)setChatExtra:;
- (void)setExtraBrandADInfo:;
- (void)setExtraImgClickInfo:;
- (id)extraImgClickInfo;
- (id)extraBrandADInfo;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (id)getFormatChatExtraFromComponentContext:;
@end
