@interface AWEUserWorkCellRightBottomLongVideoEpisodeLabelComponent : AWERLComponent
@property (nonatomic) AWERLLabelVirtualNode longVideoEpisodeLabelNode;
@property (nonatomic) AWERLFlexChildVirtualNode flexChildVirtualNode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)virtualNodeWithChildren:;
- (id)flexChildVirtualNode;
- (void)setFlexChildVirtualNode:;
- (id)longVideoEpisodeLabelNode;
- (void)setLongVideoEpisodeLabelNode:;
- (void).cxx_destruct;
+ (id)componentWithData:context:;
+ (BOOL)shouldShowLongVideoEpisode:context:;
@end
