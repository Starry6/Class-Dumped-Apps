@interface AWECloudAlbumDetailInputData : NSObject
@property (nonatomic) EcClient client;
@property (nonatomic) EcAlbum album;
@property (nonatomic) double cellSpacing;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) double footerViewHeight;
@property (nonatomic) double animationDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskKey;
- (id)init;
- (void)setClient:;
- (id)client;
- (void)setAlbum:;
- (void).cxx_destruct;
- (void)setAnimationDuration:;
- (double)animationDuration;
- (id)album;
- (id)cellSize;
- (void)setCellSize:;
- (double)cellSpacing;
- (void)setCellSpacing:;
- (double)footerViewHeight;
- (void)setFooterViewHeight:;
+ (double)defaultCellSpacing;
+ (id)defaultCellSize;
@end
