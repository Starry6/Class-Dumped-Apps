@interface IESIMLifeStoryBlockModel : IESIMBaseApiModel
@property (nonatomic) BOOL lifeStoryBlock;
@property (nonatomic) BOOL lifeStoryBlocked;
- (BOOL)lifeStoryBlock;
- (BOOL)lifeStoryBlocked;
- (void)setLifeStoryBlock:;
- (void)setLifeStoryBlocked:;
+ (id)JSONKeyPathsByPropertyKey;
@end
