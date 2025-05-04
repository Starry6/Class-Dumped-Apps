@interface AWEGuideQingTaoPopViewTrackHandler : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)commonParams;
- (void)setCommonParams:;
- (void)trackForWindowDidShowWithPopView:;
- (void)trackForOpenClickWithPopView:storage:;
- (void)trackForCancelClickWithPopView:storage:;
- (void)trackForCloseWindowWithPopView:closeType:;
- (id)paramsForShowWithModel:popView:;
- (id)initWithAwemeModel:commonParams:;
- (void).cxx_destruct;
@end
