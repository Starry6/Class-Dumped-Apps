@interface IESLiveHotChatMessageModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveText rtfContent;
@property (nonatomic) q hotChatId;
@property (nonatomic) NSMutableArray messages;
@property (nonatomic) NSMutableArray queueComboModels;
@property (nonatomic) NSMutableArray displayedComboModels;
- (id)comboModels;
- (id)displayedComboModels;
- (long long)hotChatId;
- (id)initWithHotChatMessage:;
- (void)insertComboModel:toCombos:;
- (BOOL)mergeHotChatMessage:;
- (id)queueComboModels;
- (id)rtfContent;
- (void)setDisplayedComboModels:;
- (void)setHotChatId:;
- (void)setQueueComboModels:;
- (void)setRtfContent:;
- (id)content;
- (void)setContent:;
- (id)messages;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setMessages:;
@end
