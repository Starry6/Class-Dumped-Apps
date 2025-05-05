@interface IESLiveInteractGameMorePanelItem : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) UIImage icon;
@property (nonatomic) NSURL iconURL;
@property (nonatomic) @? actionBlock;
- (void)setIconURL:;
- (void)setName:;
- (id)actionBlock;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)iconURL;
- (id)name;
- (void)setActionBlock:;
@end
