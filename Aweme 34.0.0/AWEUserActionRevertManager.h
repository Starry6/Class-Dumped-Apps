@interface AWEUserActionRevertManager : NSObject
@property (nonatomic) NSMutableArray cacheDatas;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showRecommendPersonRevertSnackBar:isFirstLevelPage:dismissBlock:actionBlock:;
- (void)storePrepareRevertUserAction:;
- (void)revertUserActionInScene:;
- (void)storePrepareRevertUserAction:data:indexPath:;
- (id)cacheDatas;
- (void)setCacheDatas:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
