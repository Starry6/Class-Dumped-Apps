@interface AWEPlayInteractionDescriptionRenderConstraintsInfo : NSObject
@property (nonatomic) AWEPlayInteractionDescriptionModifyElement element;
@property (nonatomic) AWEPlayInteractionContext interactionContext;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) BOOL isMusicInfoShow;
@property (nonatomic) double descContainerWidth;
@property (nonatomic) double trailingOffsetOfLeftContainer;
- (double)leftContainerWidth;
- (BOOL)shouldShowCancelMuteAnimation;
- (void)setIsMusicInfoShow:;
- (double)descriptionLabelConstraintWidth;
- (double)originBottomOffset;
- (BOOL)isMusicInfoShow;
- (void)setDescContainerWidth:;
- (double)trailingOffsetOfLeftContainer;
- (double)descContainerWidth;
- (double)descriptionLabelConstraintWidthForCurrentModel;
- (void)setTrailingOffsetOfLeftContainer:;
- (double)rightBlankHotExtraWidth;
- (double)rightExpandExtraWidth;
- (void)updateLayoutInfoWithElement:;
- (void)setModel:;
- (void)setElement:;
- (void)setUp;
- (id)model;
- (void).cxx_destruct;
- (id)element;
- (void)reset;
- (id)interactionContext;
- (void)setInteractionContext:;
+ (BOOL)shouldUseDescriptionLabelConstraintWidthWithModel:;
+ (long long)feedDescExpandRangeType;
+ (BOOL)fixInteractionWidthEnable;
+ (id)renderLayoutInfoWithElement:;
@end
