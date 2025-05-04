@interface AWEShareHotspotService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithParams:headerImage:snapshotImage:roundedOffset:onViewController:;
- (void)showPanelWithHotSearch:onViewController:;
@end
