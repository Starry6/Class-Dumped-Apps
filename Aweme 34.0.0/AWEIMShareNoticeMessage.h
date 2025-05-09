@interface AWEIMShareNoticeMessage : AWEIMMessage
@property (nonatomic) NSString awemeID;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSString awemeDetail;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSString fromUid;
@property (nonatomic) NSString secFromUid;
@property (nonatomic) NSString messageID;
@property (nonatomic) q serverMessageID;
@property (nonatomic) q aweType;
@property (nonatomic) q quoteReplyMessageType;
@property (nonatomic) q messageType;
@property (nonatomic) q messageState;
@property (nonatomic) NSDictionary syncedExt;
@property (nonatomic) NSDictionary localExt;
@property (nonatomic) <AWEIMMessageProtocol> quoteReplyOriginMessage;
@property (nonatomic) NSDictionary aiExt;
@property (nonatomic) NSDictionary aiBusinessExt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAwemeID:;
- (id)awemeID;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)awemeDetail;
- (void)setAwemeDetail:;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (void).cxx_destruct;
- (id)authorName;
- (void)setAuthorName:;
- (id)coverURL;
- (void)setCoverURL:;
@end
