@interface MPSNNFilterNode : NSObject
@property (nonatomic) MPSNNImageNode resultImage;
@property (nonatomic) MPSNNStateNode resultState;
@property (nonatomic) NSArray resultStates;
@property (nonatomic) <MPSNNPadding> paddingPolicy;
@property (nonatomic) NSString label;
- (id)debugQuickLookObject;
- (void)dealloc;
- (void)setLabel:;
- (id)label;
- (id)debugDescription;
- (id)resultImage;
- (id)resultState;
- (void)setPaddingPolicy:;
- (id)paddingPolicy;
- (id)gradientFilterWithSource:;
- (id)gradientFilterWithSources:;
- (id)gradientFiltersWithSources:;
- (id)trainingGraphWithSourceGradient:nodeHandler:;
- (id)initWithSourceImages:sourceStates:paddingPolicy:;
- (id)newFilterNode;
- (Class)gradientClass;
- (id)gradientFiltersWithSource:;
- (id)resultStates;
- (id)resultStatesNoAllocate;
- (id)sourceImages;
- (id)sourceStates;
@end
