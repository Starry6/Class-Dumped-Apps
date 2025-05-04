@interface AWELeftSideBarEntranceCaptionBubbleShowNotificationParameterModel : AWELeftSideBarEntranceCaptionBubbleShowParameterModel
@property (nonatomic) @? completion;
@property (nonatomic) @? clickBlock;
@property (nonatomic) @? dismissBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)initWithComponentId:withBusinessId:withContent:withCompletion:withClickBlock:withDismissBlock:;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
