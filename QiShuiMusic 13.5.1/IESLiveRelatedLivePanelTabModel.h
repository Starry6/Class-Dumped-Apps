@interface IESLiveRelatedLivePanelTabModel : NSObject
@property (nonatomic) NSString tabTitle;
@property (nonatomic) HTSLiveImage tabIconImage;
@property (nonatomic) NSString tabIconImageName;
@property (nonatomic) @? panelTabCallback;
@property (nonatomic) BOOL hasPaidLive;
@property (nonatomic) Q tabPriority;
- (void)setHasPaidLive:;
- (void)setTabPriority:;
- (BOOL)hasPaidLive;
- (id)panelTabCallback;
- (void)setPanelTabCallback:;
- (void)setTabIconImage:;
- (void)setTabIconImageName:;
- (id)tabIconImage;
- (id)tabIconImageName;
- (unsigned long long)tabPriority;
- (id)tabTitle;
- (void).cxx_destruct;
- (void)setTabTitle:;
@end
