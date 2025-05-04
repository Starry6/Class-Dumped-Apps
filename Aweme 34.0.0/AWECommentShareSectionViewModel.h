@interface AWECommentShareSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEShareTokenAlert alert;
@property (nonatomic) NSArray cellModels;
@property (nonatomic) BOOL noFriends;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWECommentLongPressPanelContext commentPageContext;
- (id)commentPageContext;
- (void)setCommentPageContext:;
- (void)fetchSectionDataSource;
- (double)sectionTotalHeight;
- (void)setCellModels:;
- (id)cellModels;
- (BOOL)noFriends;
- (void)setNoFriends:;
- (void).cxx_destruct;
- (void)setAlert:;
- (id)alert;
@end
