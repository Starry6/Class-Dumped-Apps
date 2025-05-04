@interface AWELifeStoryBlockModel : AWEBaseApiModel
@property (nonatomic) BOOL lifeStoryBlock;
@property (nonatomic) BOOL lifeStoryBlocked;
- (BOOL)lifeStoryBlock;
- (void)setLifeStoryBlock:;
- (BOOL)lifeStoryBlocked;
- (void)setLifeStoryBlocked:;
+ (id)JSONKeyPathsByPropertyKey;
@end
