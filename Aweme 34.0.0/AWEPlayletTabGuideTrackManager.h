@interface AWEPlayletTabGuideTrackManager : NSObject
@property (nonatomic) NSString playletTabPageOpenway;
@property (nonatomic) NSString playletCenterPageOpenway;
@property (nonatomic) NSString currentPageName;
@property (nonatomic) NSString playletWidgetInstallName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentPageName;
- (void)setCurrentPageName:;
- (void)updatePlayletCenterPageOpenway:;
- (void)updatePlayletPageName:;
- (void)updatePlayletWidgetInstallName:;
- (id)playletCenterGuideParams;
- (id)playletTabPageGuideParams;
- (id)playletCenterPageGuideParams;
- (void)setPlayletTabPageOpenway:;
- (id)playletTabPageOpenway;
- (id)playletWidgetInstallName;
- (void)setPlayletCenterPageOpenway:;
- (id)playletCenterPageOpenway;
- (void)setPlayletWidgetInstallName:;
- (BOOL)isFromPlayletCenterPage;
- (void)updatePlayletTabPageOpenway:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
