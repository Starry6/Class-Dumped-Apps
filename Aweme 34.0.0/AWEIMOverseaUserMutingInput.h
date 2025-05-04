@interface AWEIMOverseaUserMutingInput : AWEIMComponentBase
@property (nonatomic) AWEIMOverseaUserMutingFakeInputVC fakeInputView;
@property (nonatomic) UILabel overseaCountDownLabel;
@property (nonatomic) UIView blockBackgroudView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)changeTypeToText;
- (id)blockBackgroudView;
- (void)setBlockBackgroudView:;
- (id)overseaCountDownLabel;
- (void)setOverseaCountDownLabel:;
- (id)fakeInputView;
- (void)setFakeInputView:;
- (long long)currentInputType;
- (void).cxx_destruct;
- (id)inputVC;
@end
