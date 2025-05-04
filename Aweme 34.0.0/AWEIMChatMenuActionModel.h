@interface AWEIMChatMenuActionModel : MTLModel
@property (nonatomic) q actionType;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString ext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExt:;
- (id)schema;
- (long long)actionType;
- (void)setActionType:;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)ext;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
