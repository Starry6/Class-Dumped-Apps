@interface AWEIMSubscriptionMessage : AWEIMMessage
@property (nonatomic) NSString cardId;
@property (nonatomic) q sendTime;
@property (nonatomic) NSArray articleList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isSupportForward;
- (id)generateForwardMessage;
- (BOOL)isAllowedForward;
- (id)articleList;
- (void)setArticleList:;
- (long long)templateType;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)cardId;
- (void)setCardId:;
- (long long)sendTime;
- (void)setSendTime:;
@end
