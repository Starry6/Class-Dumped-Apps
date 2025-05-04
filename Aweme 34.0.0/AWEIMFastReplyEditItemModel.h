@interface AWEIMFastReplyEditItemModel : NSObject
@property (nonatomic) NSString replyText;
@property (nonatomic) NSString textFieldPlaceholder;
@property (nonatomic) BOOL isAddItemStyle;
@property (nonatomic) BOOL isEdited;
- (BOOL)isAddItemStyle;
- (void)setIsAddItemStyle:;
- (id)initWithText:;
- (void).cxx_destruct;
- (BOOL)isEdited;
- (id)replyText;
- (void)setReplyText:;
- (void)setTextFieldPlaceholder:;
- (id)textFieldPlaceholder;
- (void)setIsEdited:;
@end
