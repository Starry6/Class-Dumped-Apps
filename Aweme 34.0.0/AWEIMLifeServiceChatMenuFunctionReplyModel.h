@interface AWEIMLifeServiceChatMenuFunctionReplyModel : MTLModel
@property (nonatomic) AWEIMLifeServiceChatMenuReplyImageModel image;
@property (nonatomic) AWEIMLifeServiceChatMenuReplyTextModel text;
@property (nonatomic) AWEIMLifeServiceChatMenuReplyGroupInviteCardtModel groupInviteCard;
@property (nonatomic) AWEIMLifeServiceChatMenuReplyItemModel item;
@property (nonatomic) NSString ext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExt:;
- (id)groupInviteCard;
- (void)setGroupInviteCard:;
- (id)image;
- (void)setImage:;
- (void)setText:;
- (void)setItem:;
- (id)text;
- (id)item;
- (void).cxx_destruct;
- (id)ext;
+ (id)itemJSONTransformer;
+ (id)imageJSONTransformer;
+ (id)modelCustomPropertyMapper;
+ (id)groupInviteCardJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;
@end
