@interface AWEConcernUserDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSpecialFollowWithUser:error:;
- (void)didCancelSpecialFollowWithUser:error:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear;
@end
