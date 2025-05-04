@interface AWEECOMIMChatDetailMessageCacheManager : NSObject
@property (nonatomic) NSMutableDictionary cardStateStorage;
@property (nonatomic) NSMutableDictionary rateCardDraftStorage;
@property (nonatomic) NSMutableDictionary cellTimeStorage;
@property (nonatomic) NSMutableDictionary localExtStorage;
- (void)setCardStateStorage:;
- (id)cardStateStorage;
- (void)setCardState:cardIdentifier:cardModel:;
- (id)getCardStateWithCardIdentifier:;
- (void)setLocalMediaFilePath:msgIdentifier:;
- (id)getLocalMediaFilePathWithMsgIdentifier:;
- (void)setRateCardDraftStorage:;
- (void)setCellTimeStorage:;
- (void)setLocalExtStorage:;
- (id)rateCardDraftStorage;
- (id)cellTimeStorage;
- (id)localExtStorage;
- (void)setRateCardDraft:msgIdentifier:;
- (id)getRateCardDraftWithMsgIdentifier:;
- (void)setCellBuildStartTime:msgIdentifier:;
- (double)cellBuildStartTimeWithMsgIdentifier:;
- (void)setLynxMessageRawDataStorage:msgIdentifier:;
- (id)lynxMessageRawDataStorage:;
- (id)init;
- (void).cxx_destruct;
@end
