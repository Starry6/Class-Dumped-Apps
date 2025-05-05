@interface IESLiveBackgroundStrategyFactory : NSObject
@property (nonatomic) IESLiveBackgroundStrategy lastStrategy;
@property (nonatomic) NSDictionary blurImageParams;
@property (nonatomic) q orientation;
@property (nonatomic) BOOL showBlackBgIfNeed;
@property (nonatomic) BOOL showMatchRoomLandscapeBg;
- (id)blurImageParams;
- (BOOL)isAnchorForRoom:;
- (id)lastStrategy;
- (void)processBlurImageParams:;
- (void)setBlurImageParams:;
- (void)setLastStrategy:;
- (void)setShowBlackBgIfNeed:;
- (void)setShowMatchRoomLandscapeBg:;
- (BOOL)showBlackBgIfNeed;
- (BOOL)showMatchRoomLandscapeBg;
- (id)strategyForRoom:;
- (id)userService;
- (id)init;
- (long long)orientation;
- (void).cxx_destruct;
- (void)setOrientation:;
+ (id)prepareLocalImgForRoom:hasBackgroundUrl:;
+ (id)preparePlaceHolderImgForRoom:hasBackgroundUrl:;
@end
