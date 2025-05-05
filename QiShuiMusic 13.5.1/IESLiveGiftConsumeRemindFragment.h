@interface IESLiveGiftConsumeRemindFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveGiftConsumeRemindViewModel viewModel;
- (void)componentCreate;
- (void)componentMount;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
