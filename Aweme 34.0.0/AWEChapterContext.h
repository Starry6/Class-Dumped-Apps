@interface AWEChapterContext : AWEPageContext
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEChapterTracker tracker;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> playContext;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) BOOL commentPanelIsShowing;
@property (nonatomic) double panelHeightRate;
@property (nonatomic) AWEChapterPanelUIConfig uiConfig;
@property (nonatomic) NSNumber fontClassNumber;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (void)setReferString:;
- (id)logExtraDict;
- (id)enterMethod;
- (id)enterFrom;
- (id)uiConfig;
- (void)setUiConfig:;
- (id)fontClassNumber;
- (void)setPanelHeightRate:;
- (void)setPlayContext:;
- (double)panelHeightRate;
- (BOOL)commentPanelIsShowing;
- (void)setCommentPanelIsShowing:;
- (void)setModel:;
- (id)tracker;
- (id)model;
- (void)setTracker:;
- (void).cxx_destruct;
- (id)playContext;
@end
