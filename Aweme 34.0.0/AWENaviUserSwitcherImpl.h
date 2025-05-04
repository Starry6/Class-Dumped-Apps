@interface AWENaviUserSwitcherImpl : NSObject
@property (nonatomic) NSString userId;
@property (nonatomic) NSString secUserId;
@property (nonatomic) <AWENaviModuleService> moduleService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSecUserId:;
- (id)secUserId;
- (id)initWithUserId:secUserId:;
- (id)moduleService;
- (id)getSecUserId;
- (void)setModuleService:;
- (id)getSwitchUserId;
- (BOOL)isComplete;
- (id)userId;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setUserId:;
- (BOOL)isEqual:;
- (id)getUserId;
@end
