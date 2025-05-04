@interface AWEInnerPushCommonViewModel : NSObject
@property (nonatomic) Q pushViewHeightEnum;
@property (nonatomic) AWEInnerPushCommonViewLeftIconModel leftIconModel;
@property (nonatomic) AWEInnerPushCommonViewLeftExtraIconModel leftExtraIconModel;
@property (nonatomic) AWEInnerPushCommonViewTitleAreaModel titleAreaModel;
@property (nonatomic) AWEInnerPushCommonViewContentAreaModel contentAreaModel;
@property (nonatomic) AWEInnerPushCommonViewRightActionAreaModel rightActionAreaModel;
- (void)setPushViewHeightEnum:;
- (void)setLeftIconModel:;
- (void)setLeftExtraIconModel:;
- (void)setTitleAreaModel:;
- (id)titleAreaModel;
- (void)setContentAreaModel:;
- (id)contentAreaModel;
- (void)setRightActionAreaModel:;
- (id)rightActionAreaModel;
- (unsigned long long)pushViewHeightEnum;
- (id)leftIconModel;
- (id)leftExtraIconModel;
- (void).cxx_destruct;
@end
