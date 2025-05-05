@interface IESLiveBattleDrawFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveBattleDrawViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)didChangeStateFrom:to:;
- (void)handleClearNotify:;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
+ (BOOL)isMixed;
+ (BOOL)componentShouldActive:;
@end
