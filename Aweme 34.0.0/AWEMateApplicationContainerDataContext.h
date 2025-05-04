@interface AWEMateApplicationContainerDataContext : NSObject
@property (nonatomic) BOOL showRecommendList;
@property (nonatomic) BOOL hasRecommendList;
@property (nonatomic) BOOL hasUnfoldNoticeList;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSMutableSet shownMateApplications;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)shownMateApplications;
- (BOOL)showRecommendList;
- (void)setShowRecommendList:;
- (BOOL)hasRecommendList;
- (void)setHasRecommendList:;
- (BOOL)hasUnfoldNoticeList;
- (void)setHasUnfoldNoticeList:;
- (void)setShownMateApplications:;
- (void).cxx_destruct;
@end
