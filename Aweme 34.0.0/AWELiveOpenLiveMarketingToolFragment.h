@interface AWELiveOpenLiveMarketingToolFragment : IESLiveGuideComponent
@property (nonatomic) IESLiveGuideToolBarItem windmillItem;
@property (nonatomic) NSString originRightText;
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL itemFirstTimeLoad;
- (void)componentMount;
- (void)componentUnmount;
- (void)setItemFirstTimeLoad:;
- (void)handleMarketingToolsFENotification:;
- (void)toolbarItemReloadFinished;
- (id)windmillItem;
- (void)switchToolState:;
- (id)originRightText;
- (id)getTrackParamsWithItem:;
- (BOOL)itemFirstTimeLoad;
- (void)setOriginRightText:;
- (void)setWindmillItem:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
@end
