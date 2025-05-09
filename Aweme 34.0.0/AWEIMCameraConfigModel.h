@interface AWEIMCameraConfigModel : NSObject
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL enableShowLoading;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString activityString;
@property (nonatomic) NSString effectBizScene;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) NSString sendButtonTitle;
@property (nonatomic) BOOL defaultOpenPanel;
@property (nonatomic) BOOL defaultNotUseEffect;
@property (nonatomic) NSString toConversationID;
@property (nonatomic) AWEUserModel fullDetailUser;
@property (nonatomic) NSString entranceString;
@property (nonatomic) NSString chatGameType;
@property (nonatomic) @? beforePresentBlock;
@property (nonatomic) @? completionBlock;
@property (nonatomic) BOOL isSupportExchangeImage;
@property (nonatomic) BOOL isSupportWatchOnce;
@property (nonatomic) BOOL shouldJustDismissTopViewController;
@property (nonatomic) BOOL shouldBlockVideo;
@property (nonatomic) BOOL disableLivePhoto;
@property (nonatomic) BOOL disableProp;
@property (nonatomic) NSString aiExtStr;
@property (nonatomic) NSString quoteReplyMessageID;
@property (nonatomic) <IESIMMessageExternalRefContextProvider> externalRefContextProvider;
@property (nonatomic) NSArray stickerIdList;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)trackParams;
- (void)setTrackParams:;
- (void)setToConversationID:;
- (id)quoteReplyMessageID;
- (id)toConversationID;
- (id)fullDetailUser;
- (void)setFullDetailUser:;
- (id)sendButtonTitle;
- (void)setSendButtonTitle:;
- (BOOL)shouldBlockVideo;
- (void)setShouldBlockVideo:;
- (BOOL)disableLivePhoto;
- (void)setDisableLivePhoto:;
- (BOOL)disableProp;
- (void)setDisableProp:;
- (BOOL)shouldJustDismissTopViewController;
- (void)setQuoteReplyMessageID:;
- (id)externalRefContextProvider;
- (void)setExternalRefContextProvider:;
- (BOOL)isSupportExchangeImage;
- (void)setIsSupportExchangeImage:;
- (BOOL)isSupportWatchOnce;
- (BOOL)defaultOpenPanel;
- (id)stickerIdList;
- (id)entranceString;
- (BOOL)defaultNotUseEffect;
- (BOOL)enableShowLoading;
- (id)effectBizScene;
- (void)setEffectBizScene:;
- (id)aiExtStr;
- (id)chatGameType;
- (void)setEntranceString:;
- (void)setBeforePresentBlock:;
- (id)beforePresentBlock;
- (void)setStickerIdList:;
- (void)setEnableShowLoading:;
- (void)setChatGameType:;
- (void)setShouldJustDismissTopViewController:;
- (void)setDefaultOpenPanel:;
- (void)setDefaultNotUseEffect:;
- (void)setIsSupportWatchOnce:;
- (void)setAiExtStr:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (id)activityString;
- (void).cxx_destruct;
- (void)setActivityString:;
@end
