@interface AWESearchDiscussTabModel : MTLModel
@property (nonatomic) NSString tabName;
@property (nonatomic) q sortType;
@property (nonatomic) NSString extra;
@property (nonatomic) BOOL isHotspot;
@property (nonatomic) BOOL isIndependentRecall;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setIsIndependentRecall:;
- (BOOL)isIndependentRecall;
- (id)extra;
- (void).cxx_destruct;
- (void)setSortType:;
- (long long)sortType;
- (BOOL)isHotspot;
- (void)setIsHotspot:;
- (id)tabName;
- (void)setTabName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
