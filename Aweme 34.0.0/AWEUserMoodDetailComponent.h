@interface AWEUserMoodDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) BOOL isLikeUserRequesting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishDiggProfileWithUser:isDigged:error:;
- (BOOL)isLikeUserRequesting;
- (void)setIsLikeUserRequesting:;
- (id)user;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)isCurrentUser;
- (void)onInit;
@end
