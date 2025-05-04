@interface AWESharePlayletService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithPlayletInfo:previousPage:onViewController:;
- (id)statsShareMixVideoStage;
- (id)contextFromPlayletVideo:;
@end
