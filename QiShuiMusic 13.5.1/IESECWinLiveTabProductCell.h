@interface IESECWinLiveTabProductCell : IESECWinListKitNativeCell
@property (nonatomic) IESECLLView llView;
@property (nonatomic) <IESECWinFlexLivingProductCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindObject:;
- (void)clickGoodsCoverTagViewWithModel:;
- (void)clickReplayButtonView;
- (id)llView;
- (void)setLlView:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)cellBuilderWithObject:;
@end
