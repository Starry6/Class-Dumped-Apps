@interface AWEServerFavoriteTagDataModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber lastUpdateTime;
@property (nonatomic) BOOL isAhead;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isAhead;
- (void)setIsAhead:;
- (void)setLastUpdateTime:;
- (void)setCount:;
- (id)count;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (id)lastUpdateTime;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
