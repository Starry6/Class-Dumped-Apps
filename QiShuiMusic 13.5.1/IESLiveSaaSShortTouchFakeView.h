@interface IESLiveSaaSShortTouchFakeView : UILabel
@property (nonatomic) Q type;
@property (nonatomic) NSString viewType;
@property (nonatomic) {CGSize=dd} pluginLayoutContentSize;
@property (nonatomic) {UIEdgeInsets=dddd} pluginLayoutContentInsets;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pluginLayoutContentInsets;
- (id)pluginLayoutContentSize;
- (void)setPluginLayoutContentInsets:;
- (void)setPluginLayoutContentSize:;
- (id)viewType;
- (void)setType:;
- (unsigned long long)type;
- (void)setViewType:;
@end
