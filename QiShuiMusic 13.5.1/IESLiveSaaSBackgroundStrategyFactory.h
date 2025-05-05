@interface IESLiveSaaSBackgroundStrategyFactory : NSObject
@property (nonatomic) IESLiveSaaSBackgroundStrategy lastStrategy;
@property (nonatomic) q orientation;
@property (nonatomic) BOOL showMatchRoomLandscapeBg;
- (BOOL)isAnchorForRoom:;
- (id)lastStrategy;
- (id)prepareLocalImgForRoom:hasBackgroundUrl:;
- (id)preparePlaceHolderImgForRoom:hasBackgroundUrl:;
- (void)setLastStrategy:;
- (void)setShowMatchRoomLandscapeBg:;
- (BOOL)showMatchRoomLandscapeBg;
- (id)strategyForRoom:;
- (id)userService;
- (id)init;
- (long long)orientation;
- (void).cxx_destruct;
- (void)setOrientation:;
@end
