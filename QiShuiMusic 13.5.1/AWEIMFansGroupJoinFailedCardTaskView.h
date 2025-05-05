@interface AWEIMFansGroupJoinFailedCardTaskView : UIView
@property (nonatomic) NSString task;
@property (nonatomic) BOOL metRequirement;
@property (nonatomic) UIImageView statusIcon;
@property (nonatomic) UILabel taskLabel;
- (id)initWithTask:status:;
- (BOOL)metRequirement;
- (void)setMetRequirement:;
- (void)setStatusIcon:;
- (void)setTaskLabel:;
- (id)statusIcon;
- (id)taskLabel;
- (id)task;
- (void)setTask:;
- (void).cxx_destruct;
@end
