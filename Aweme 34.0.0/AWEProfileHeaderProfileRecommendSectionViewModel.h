@interface AWEProfileHeaderProfileRecommendSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) BOOL isRelationReasonTracked;
@property (nonatomic) BOOL isPreviousAndServerRelationSame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithContext:;
- (BOOL)isRelationReasonTracked;
- (void)setIsRelationReasonTracked:;
- (id)padService;
- (double)topPaddingWithUpperSection:;
- (double)bottomPaddingWithLowerSection:;
- (void)trackForRelationReason;
- (id)recommendReasonShowText:needTrack:;
- (void)didTapProfileRecommendView;
- (void)__trackRecReasonComparison;
- (void)__trackRecommenReasonIfNeededWithContext:withEventName:;
- (id)privacyMapContext:;
- (id)reasonStatus:;
- (id)reasonPrevious:;
- (id)reasonServer:;
- (void)__trackRecommenRreasonWithPrevious:server:;
- (BOOL)shouldShowReasonStatus:;
- (void)setIsPreviousAndServerRelationSame:;
- (BOOL)canShowMoreMenue;
- (BOOL)canHidePost;
- (void)__showProfileMenuWithMethod:;
- (BOOL)isPreviousAndServerRelationSame;
- (long long)sectionType;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)sectionSize;
+ (BOOL)canShowMoreMenueWithContext:;
+ (BOOL)showProfileRecommendViewWithContext:;
@end
