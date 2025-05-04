@interface AWEBarPanelVCPanelUIConfig : NSObject
@property (nonatomic) UIImage panelIcon;
@property (nonatomic) NSString panelTitle;
@property (nonatomic) NSString cellClassName;
@property (nonatomic) double cellHeight;
- (id)panelTitle;
- (void)setPanelTitle:;
- (void)setPanelIcon:;
- (void)setCellClassName:;
- (id)panelIcon;
- (id)cellClassName;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)setCellHeight:;
+ (id)defaultWatchLaterConfig;
@end
