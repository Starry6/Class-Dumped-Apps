@interface AWETeenGeneralEncyInfoCell : UICollectionViewCell
@property (nonatomic) AWETeenGeneralWikiCardModel model;
@property (nonatomic) AWETeenLynxContainer encyLynxView;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)view:didLoadFailedWithUrl:error:;
- (void)view:didFinishLoadWithURL:;
- (void)configWithModel:extra:;
- (void)showLog;
- (id)encyLynxView;
- (void)setEncyLynxView:;
- (void)setModel:;
- (id)extra;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
+ (id)cellSizeWithModel:;
@end
