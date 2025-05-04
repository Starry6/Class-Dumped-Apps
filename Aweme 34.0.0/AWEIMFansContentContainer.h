@interface AWEIMFansContentContainer : AWEIMFansBaseContainer
@property (nonatomic) UILabel assemblyContentLabel;
@property (nonatomic) UILabel leaveMsgLabel;
@property (nonatomic) UILabel followTimeLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithViewModel:;
- (id)assemblyContentLabel;
- (void)setAssemblyContentLabel:;
- (id)leaveMsgLabel;
- (id)followTimeLabel;
- (void)updateContentText;
- (void)udpateLeaveMsgLabel;
- (void)udpateFollowTimeLabel;
- (void)updateAssemblyContentLabel;
- (void)setLeaveMsgLabel:;
- (void)setFollowTimeLabel:;
- (void).cxx_destruct;
- (void)setupViews;
@end
