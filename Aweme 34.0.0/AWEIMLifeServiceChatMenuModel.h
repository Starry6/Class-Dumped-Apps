@interface AWEIMLifeServiceChatMenuModel : MTLModel
@property (nonatomic) NSString menuItemID;
@property (nonatomic) q menuItemType;
@property (nonatomic) NSString itemTitle;
@property (nonatomic) NSString itemSubtitle;
@property (nonatomic) NSArray subItemList;
@property (nonatomic) AWEIMLifeServiceChatMenuFunctionReplyModel replyModel;
@property (nonatomic) AWEIMLifeServiceChatMenuFunctionJumpModel jumpModel;
@property (nonatomic) AWEIMLifeServiceChatMenuAuditInfoModel auditModel;
@property (nonatomic) q operationSource;
@property (nonatomic) NSString ext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExt:;
- (long long)menuItemType;
- (void)setJumpModel:;
- (id)jumpModel;
- (id)subItemList;
- (id)menuItemID;
- (id)auditModel;
- (void)setSubItemList:;
- (id)toShortModel;
- (void)setMenuItemID:;
- (void)setMenuItemType:;
- (id)replyModel;
- (void)setReplyModel:;
- (void)setAuditModel:;
- (void).cxx_destruct;
- (id)itemTitle;
- (void)setItemTitle:;
- (id)itemSubtitle;
- (void)setItemSubtitle:;
- (id)ext;
- (long long)operationSource;
- (void)setOperationSource:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)jumpModelJSONTransformer;
+ (id)subItemListJSONTransformer;
+ (id)replyModelJSONTransformer;
+ (id)auditModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
