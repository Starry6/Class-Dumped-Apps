@interface AWEPOIFeedUgcRecommendDishInfoModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString itemID;
@property (nonatomic) q start;
@property (nonatomic) q end;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidRange;
- (void)setStart:;
- (id)range;
- (void)setEnd:;
- (id)itemID;
- (void)setItemID:;
- (long long)end;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)start;
+ (id)modelWithText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
