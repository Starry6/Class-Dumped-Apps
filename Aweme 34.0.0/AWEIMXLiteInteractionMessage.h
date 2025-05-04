@interface AWEIMXLiteInteractionMessage : AWEIMMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)enableBubbleColorWithType:isQuoteReply:;
- (BOOL)supportRefactorCell;
- (id)bubblePaddingInset:;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)calculateAttributedContent;
- (int)type;
+ (id)liteInteractionContent;
+ (id)contentAttributes;
@end
