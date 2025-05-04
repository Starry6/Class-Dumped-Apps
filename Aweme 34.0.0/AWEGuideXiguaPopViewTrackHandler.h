@interface AWEGuideXiguaPopViewTrackHandler : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString fromModuleName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (void)trackForWindowDidShowWithPopView:;
- (void)trackForOpenClickWithPopView:storage:;
- (void)trackForCancelClickWithPopView:storage:;
- (void)trackForCloseWindowWithPopView:closeType:;
- (id)fromModuleName;
- (void)setFromModuleName:;
- (id)initWithAwemeModel:referString:fromModuleName:;
- (id)paramsForShowWithModel:popView:;
- (void).cxx_destruct;
@end
