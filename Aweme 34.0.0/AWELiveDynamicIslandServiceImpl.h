@interface AWELiveDynamicIslandServiceImpl : NSObject
@property (nonatomic) AWELiveDynamicIslandHandler activityInstance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startActivity:completion:;
- (void)updateActivity:completion:;
- (void)updateRealtimeActivity:;
- (void)endActivityAll;
- (BOOL)dynamicIslandIsShowing;
- (id)activityInstance;
- (void)setActivityInstance:;
- (void)fetchAvatarImageWithParams:completion:;
- (void)dataDefaultsForData:;
- (void)endActivity;
- (void).cxx_destruct;
@end
