@interface AWEHotSearchCommentSectionCellModel : NSObject
@property (nonatomic) BOOL isSubComment;
@property (nonatomic) BOOL isInserted;
@property (nonatomic) AWEHotSearchCommentAuthorInfoModel authorInfoModel;
@property (nonatomic) AWEHotSearchCommentContentInfoModel contentInfoModel;
@property (nonatomic) AWEHotSearchCommentActionBarModel actionBarModel;
@property (nonatomic) AWECommentModel commentModel;
@property (nonatomic) double containerWidth;
@property (nonatomic) BOOL shouldShowFoldButton;
@property (nonatomic) AWECommonFeedSectionContext commonFeedSectionContext;
@property (nonatomic) BOOL hasTracked;
@property (nonatomic) @? trackBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commentModel;
- (void)setCommentModel:;
- (BOOL)hasTracked;
- (void)setHasTracked:;
- (void)setIsSubComment:;
- (BOOL)isSubComment;
- (id)cellSizeWithConstraintWidth:;
- (void)configWithSectionData:;
- (id)commonFeedSectionContext;
- (void)setCommonFeedSectionContext:;
- (id)p_attributedContentForComment:;
- (void)setIsInserted:;
- (void)setAuthorInfoModel:;
- (void)setContentInfoModel:;
- (void)setActionBarModel:;
- (id)authorInfoModel;
- (id)contentInfoModel;
- (id)actionBarModel;
- (id)p_buildContentInfoModel;
- (id)p_buildAuthorInfoModelWithAuthorIdentity:;
- (id)p_buildActionBarModelWithNeedAnimate:;
- (BOOL)shouldShowFoldButton;
- (void)p_textFoldButtonWithAttributedString:;
- (id)p_getFullTextBtnAttrString:;
- (id)p_commentImageURLModel:;
- (id)p_commentImageAdjustSizeWithRawSize:;
- (void)setShouldShowFoldButton:;
- (id)trackBlock;
- (void)configWithCommentModel:isSubComment:isInserted:authorIdentity:;
- (void)resetActionBar;
- (void)setTrackBlock:;
- (BOOL)isInserted;
- (void).cxx_destruct;
- (double)containerWidth;
- (void)setContainerWidth:;
@end
