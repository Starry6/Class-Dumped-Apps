@interface IESLiveAutoMatchAlertViewConfig : NSObject
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSString actionText;
@property (nonatomic) NSString rightButtonText;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? leftButtonBlock;
@property (nonatomic) @? rightButtonBlock;
- (id)leftButtonBlock;
- (id)rightButtonBlock;
- (void)setLeftButtonBlock:;
- (void)setRightButtonBlock:;
- (id)descriptionText;
- (id)actionBlock;
- (void).cxx_destruct;
- (void)setDescriptionText:;
- (void)setActionBlock:;
- (void)setRightButtonText:;
- (id)rightButtonText;
- (id)actionText;
- (void)setActionText:;
@end
