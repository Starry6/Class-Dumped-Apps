@interface AWEShareMusicBaseService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithMusic:extraLogInfo:onViewController:;
- (id)contextWithMusic:;
- (id)statsShareMusicStage;
@end
