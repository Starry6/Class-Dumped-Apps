@interface AWEPadLeftSideBarMiniGameItemDataModel : MTLModel
@property (nonatomic) NSString icon;
@property (nonatomic) NSString name;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString gameId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGameId:;
- (id)gameId;
- (id)schema;
- (void)setSchema:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
