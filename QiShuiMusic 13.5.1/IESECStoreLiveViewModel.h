@interface IESECStoreLiveViewModel : NSObject
@property (nonatomic) IESECRelationLiveInfoModel liveInfoModel;
@property (nonatomic) IESECStorePageContext pageContext;
@property (nonatomic) <IESECLiveCardContainerDelegate> containerDelegate;
@property (nonatomic) <IESECLiveCardViewOuterDelegate> cardViewDelegate;
@property (nonatomic) NSString liveTitle;
@property (nonatomic) NSString streamData;
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString anchorID;
@property (nonatomic) NSString roomUrl;
@property (nonatomic) NSArray liveCoverUrlList;
@property (nonatomic) IESECRelationLiveGiftModel liveGiftModel;
@property (nonatomic) <IESECLiveCardModuleInterface> cardModule;
@property (nonatomic) BOOL liveRoomTransferring;
@property (nonatomic) BOOL shouldTransferToLiveRoomLeaveFinger;
@property (nonatomic) NSString btmId;
@property (nonatomic) BOOL hasShowLiveTip;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)roomUrl;
- (id)anchorID;
- (id)anchorId;
- (id)btmId;
- (id)cardModule;
- (id)ecomLiveParamsJSONStrOnPreLive;
- (id)ecomLiveParamsOnEnterLive;
- (void)fetchCardIfNeeded;
- (BOOL)hasShowLiveTip;
- (id)initWithPageContext:;
- (BOOL)isLiveRoomTransferring;
- (id)liveCardTrackParams;
- (id)liveCoverUrlList;
- (id)liveGiftMetaInfoDict;
- (id)liveGiftModel;
- (id)liveInfoModel;
- (id)liveTitle;
- (id)p_passThroughLogDataDict;
- (void)p_updateCardModuleWithContainerDelegate:cardViewDelegate:;
- (id)popupUrl;
- (void)setBtmId:;
- (void)setCardModule:;
- (void)setHasShowLiveTip:;
- (void)setLiveInfoModel:;
- (void)setLiveRoomTransferring:;
- (void)setShouldTransferToLiveRoomLeaveFinger:;
- (id)shortRoomUrl;
- (BOOL)shouldTransferToLiveRoomLeaveFinger;
- (void)subscribeLiveCardMessages;
- (void)trackLivesdkLiveShow;
- (void)trackLivesdkLiveTipsClick:;
- (void)trackLivesdkLiveTipsShow;
- (void)trackLivesdkLivecellClick:;
- (void)trackLivesdkOpenAudio;
- (void)unsubscribeLiveCardMessages;
- (void)updateLiveCardModule;
- (void)updateLiveInfoModel:;
- (void)updateLiveInfoModel:insertBlk:;
- (id)cardViewDelegate;
- (void)setCardViewDelegate:;
- (void).cxx_destruct;
- (void)messageReceived:;
- (id)roomID;
- (id)pageContext;
- (void)setPageContext:;
- (id)streamData;
- (id)containerDelegate;
- (void)setContainerDelegate:;
@end
