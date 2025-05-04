@interface AWEPostPagePrivacyHandler : NSObject
@property (nonatomic) <AWEPublishPrivacySettingHandlerProtocol> privacyHandler;
@property (nonatomic) <AWEPublishPrivacySettingChangeInfoProtocol> privacyChangeInfo;
@property (nonatomic) BOOL isPrivacyViewShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEPostPageContext> context;
- (void)bindServices:;
- (id)privacyHandler;
- (void)setPrivacyHandler:;
- (void)publishPrivacySettingHandler:didChangeWithInfo:;
- (void)didSelectPrivacy;
- (void)refreshPrivacyHandler;
- (id)privacyChangeInfo;
- (BOOL)isPrivacyViewShowing;
- (void)setIsPrivacyViewShowing:;
- (void)setPrivacyChangeInfo:;
- (void).cxx_destruct;
- (id)context;
+ (void)_aweLazyRegisterPostPage;
@end
