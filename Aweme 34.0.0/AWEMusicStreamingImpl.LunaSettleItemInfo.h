@interface AWEMusicStreamingImpl.LunaSettleItemInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q itemType;
@property (nonatomic) NSString itemID;
@property (nonatomic) q quantity;
- (long long)itemType;
- (id)itemID;
- (id)initWithDictionary:error:;
- (void)setItemType:;
- (void)setItemID:;
- (id)init;
- (void).cxx_destruct;
- (void)setQuantity:;
- (id)initWithCoder:;
- (long long)quantity;
+ (id)JSONKeyPathsByPropertyKey;
@end
