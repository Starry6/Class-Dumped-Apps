@interface IESLiveSaaSNativeAnimationUser : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString userName;
@property (nonatomic) NSString userAvater;
@property (nonatomic) NSString userHonorUrl;
@property (nonatomic) NSString imIconLevelUrl;
@property (nonatomic) NSString borderUrl;
@property (nonatomic) NSNumber honorLevel;
@property (nonatomic) NSString displayID;
- (id)borderUrl;
- (id)honorLevel;
- (id)imIconLevelUrl;
- (id)secUserID;
- (void)setBorderUrl:;
- (void)setHonorLevel:;
- (void)setImIconLevelUrl:;
- (void)setSecUserID:;
- (void)setUserAvater:;
- (void)setUserHonorUrl:;
- (id)userAvater;
- (id)userHonorUrl;
- (id)displayID;
- (id)userID;
- (id)userName;
- (void)setDisplayID:;
- (void)setUserName:;
- (void).cxx_destruct;
- (void)setUserID:;
@end
