@interface IESECEntranceModifyResultItem : MTLModel
@property (nonatomic) NSString page;
@property (nonatomic) NSString scene;
@property (nonatomic) Q actionType;
@property (nonatomic) NSArray keys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initPutItemWithScene:keys:;
- (id)initRemoveItemWithScene:keys:;
- (id)page;
- (void)setPage:;
- (void)setScene:;
- (id)keys;
- (unsigned long long)actionType;
- (void)setActionType:;
- (id)scene;
- (void)setKeys:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
