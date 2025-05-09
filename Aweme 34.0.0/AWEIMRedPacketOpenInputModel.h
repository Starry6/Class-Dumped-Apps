@interface AWEIMRedPacketOpenInputModel : NSObject
@property (nonatomic) q openType;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString orderNO;
@property (nonatomic) NSString quoteReplyMessageID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString paramsForActivity;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) <IESIMAudioMessageRecorderInterface> recorder;
@property (nonatomic) @? onOpenCompletion;
@property (nonatomic) @? onStageChanged;
@property (nonatomic) AWEURLModel resourceUrl;
@property (nonatomic) NSArray stickerIdList;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)quoteReplyMessageID;
- (long long)openType;
- (void)setOpenType:;
- (void)setQuoteReplyMessageID:;
- (id)stickerIdList;
- (void)setParamsForActivity:;
- (id)paramsForActivity;
- (void)setStickerIdList:;
- (id)onOpenCompletion;
- (void)setOrderNO:;
- (void)setOnStageChanged:;
- (id)onStageChanged;
- (id)orderNO;
- (void)setOnOpenCompletion:;
- (id)conversationID;
- (void).cxx_destruct;
- (void)setRecorder:;
- (id)recorder;
- (void)setConversationID:;
- (void)setResourceUrl:;
- (id)resourceUrl;
@end
