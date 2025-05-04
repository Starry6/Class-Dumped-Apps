@interface AWEDTOMission : MTLModel
@property (nonatomic) NSString reserved_kw_id;
@property (nonatomic) NSString type;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isAssign;
@property (nonatomic) BOOL excludeCustomStickerEntrance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExcludeCustomStickerEntrance:;
- (BOOL)excludeCustomStickerEntrance;
- (id)reserved_kw_id;
- (void)setReserved_kw_id:;
- (void)setIsAssign:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (BOOL)isAssign;
+ (id)JSONKeyPathsByPropertyKey;
@end
