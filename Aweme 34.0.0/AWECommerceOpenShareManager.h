@interface AWECommerceOpenShareManager : NSObject
@property (nonatomic) Q status;
@property (nonatomic) NSString nationalUID;
@property (nonatomic) AWETaskModel taskModel;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskModel;
- (void)setTaskModel:;
- (id)initWithNationalUID:requestMissionStatus:openShareLandedPageType:taskModel:;
- (void)setNationalUID:;
- (id)nationalUID;
- (void)showInconsistentUIDTipsWithContainerView:;
- (BOOL)isEnterOpenSharePublish;
- (unsigned long long)getOpenShareRequestMissionStatus;
- (id)getOpenShareTaskModel;
- (void)dealloc;
- (void)setStatus:;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)initWithCoder:;
@end
