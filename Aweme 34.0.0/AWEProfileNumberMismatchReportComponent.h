@interface AWEProfileNumberMismatchReportComponent : AWEProfileBaseComponent
@property (nonatomic) q previousIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPreviousIndex:;
- (long long)previousIndex;
- (void)trackNumberMismatchWithTabModel:vc:;
- (void)trackMismatchIfNeededWithTabIndex:;
- (void)onDidSelectTabListIndex:actionType:;
- (BOOL)isCurrentUser;
- (void)viewWillDisappear;
- (void)onInit;
+ (id)trackEventNameDict;
@end
