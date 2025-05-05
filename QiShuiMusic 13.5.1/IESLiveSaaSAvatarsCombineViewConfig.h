@interface IESLiveSaaSAvatarsCombineViewConfig : NSObject
@property (nonatomic) NSNumber avatarLength;
@property (nonatomic) NSNumber boardWidth;
@property (nonatomic) UIColor boardColor;
@property (nonatomic) NSNumber overlapDistance;
@property (nonatomic) NSNumber maxAvatarCount;
@property (nonatomic) BOOL hasPlaceholderImage;
@property (nonatomic) BOOL hasStatusPoint;
@property (nonatomic) NSArray users;
- (id)overlapDistance;
- (id)avatarLength;
- (id)boardColor;
- (id)boardWidth;
- (BOOL)hasStatusPoint;
- (void)setAvatarLength:;
- (void)setBoardColor:;
- (void)setBoardWidth:;
- (void)setHasStatusPoint:;
- (void)setMaxAvatarCount:;
- (void)setOverlapDistance:;
- (id)users;
- (void).cxx_destruct;
- (void)setHasPlaceholderImage:;
- (BOOL)hasPlaceholderImage;
- (id)maxAvatarCount;
- (void)setUsers:;
@end
