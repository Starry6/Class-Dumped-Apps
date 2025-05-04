@interface AWECommentPanelHeaderConfigModel : NSObject
@property (nonatomic) BOOL isApplyCustomAnchorList;
@property (nonatomic) NSArray customAnchorNameList;
@property (nonatomic) BOOL isFilterCommentCountComponent;
@property (nonatomic) NSArray filterHeaderButtonTypes;
- (BOOL)isApplyCustomAnchorList;
- (BOOL)isFilterCommentCountComponent;
- (id)filterHeaderButtonTypes;
- (id)customAnchorNameList;
- (void)setIsApplyCustomAnchorList:;
- (void)setCustomAnchorNameList:;
- (void)setIsFilterCommentCountComponent:;
- (void)setFilterHeaderButtonTypes:;
- (void).cxx_destruct;
@end
