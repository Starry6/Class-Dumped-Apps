@interface AWERelatedRecommendImpl.RelatedRecommendTopMentionedElement : AWERelatedRecommendTopBaseElement
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView skeletonView;
@property (nonatomic) double height;
@property (nonatomic) double bottomSpacing;
- (id)skeletonView;
- (id)horizontalGestureRecognizers;
- (id)init;
- (id)contentView;
- (id)initWithDataModel:;
- (void).cxx_destruct;
- (double)height;
- (void)updateUI;
- (double)bottomSpacing;
+ (id)createWithContext:container:currentModel:;
+ (long long)type;
@end
