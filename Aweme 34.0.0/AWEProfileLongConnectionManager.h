@interface AWEProfileLongConnectionManager : NSObject
@property (nonatomic) NSMapTable profileHandlerMap;
@property (nonatomic) <IESLCMessageHandlerProtocol> messageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (void)setProfileHandlerMap:;
- (void)addHandlerForStaticRegister;
- (void)fetchShortLinkPackageDataForBizIds:isColdLaunch:;
- (id)profileHandlerMap;
- (void)p_handleProfileMessagePayloadModel:eventParams:;
- (void)addWeakProfileHandler:forBizId:;
- (void)p_handleProfileMessageData:eventParams:;
- (void)fetchShortLinkPackageDataForBizIds:;
- (void)addWeakProfileHandler:forBizIds:;
- (void)removeProfileHandlerForBizId:;
- (BOOL)sendProfileLCMessageCell:forBizId:;
- (id)init;
- (void).cxx_destruct;
+ (id)bizHandlerClzNameStaticRegisterDic;
+ (id)sharedInstance;
@end
