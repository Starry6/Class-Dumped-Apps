@interface IESLiveAccessNode : NSObject
@property (nonatomic) double originY;
@property (nonatomic) double originX;
@property (nonatomic) @ realObj;
@property (nonatomic) NSMutableArray subNodes;
- (id)realObj;
- (id)currentLevelElements;
- (void)insertSubNode:;
- (void)setRealObj:;
- (void)setSubNodes:;
- (id)subNodes;
- (id)init;
- (void).cxx_destruct;
- (void)setOriginX:;
- (void)setOriginY:;
- (double)originX;
- (double)originY;
@end
