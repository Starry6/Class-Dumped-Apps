@interface AWEFeedHomepageLongPressEditViewControllerConfig : NSObject
@property (nonatomic) NSArray panelItems;
@property (nonatomic) AWEFeedHomepageLongPressPanelItem selectedItem;
@property (nonatomic) q panelStyle;
@property (nonatomic) NSString panelTitle;
@property (nonatomic) UIImage panelImage;
@property (nonatomic) NSString enterMethod;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)panelTitle;
- (void)setPanelTitle:;
- (id)panelImage;
- (void)setPanelImage:;
- (long long)panelStyle;
- (id)panelItems;
- (void)setPanelItems:;
- (void)setPanelStyle:;
- (void).cxx_destruct;
- (id)selectedItem;
- (void)setSelectedItem:;
@end
