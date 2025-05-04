@interface AWENewStoryIndexModel : AWEBaseApiModel
@property (nonatomic) NSString itemID;
@property (nonatomic) q index;
@property (nonatomic) q imageCount;
- (void)setIndex:;
- (long long)index;
- (id)itemID;
- (void)setItemID:;
- (long long)imageCount;
- (void).cxx_destruct;
- (void)setImageCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
