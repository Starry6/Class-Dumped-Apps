@interface IESLiveSaaSBigPartyJSBridgeHandler : NSObject
@property (nonatomic) <IESLiveBigPartyAnchorAction> bigPartyActionCreator;
@property (nonatomic) <IESLiveBigPartyAudienceAction> adminAction;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAdminAction:;
- (id)adminAction;
- (id)bigPartyActionCreator;
- (void)registerHandlerWithBridge:;
- (void)setBigPartyActionCreator:;
- (void).cxx_destruct;
@end
