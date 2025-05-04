@interface AWEProfileReplaceMusicAwemeDetailManager : NSObject
@property (nonatomic) AWEReplaceMusicListDataController dataController;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> awemeDetailVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)replaceMusicPublishProgressWithTask:taskStatus:;
- (void)setDataController:;
- (void)deleteAwemeWithID:;
- (id)replaceMusicDetailViewController;
- (void)setAwemeDetailVC:;
- (id)awemeDetailVC;
- (id)initWithDataController:user:;
- (void)showReplaceMusicFullPageAwemeDetailList;
- (id)user;
- (void)setUser:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)dataController;
@end
