@interface LynxPageReloadHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadLynxView:withTemplateBin:;
- (void)removeTextLabel;
- (void)attachLynxView:;
- (id)getTemplateData;
- (void)reloadLynxView:;
- (id)getTemplateJsInfo:withSize:;
- (id)initWithLynxView:;
- (void)loadFromBundle:withURL:initData:;
- (void)loadFromLocalFile:withURL:initData:;
- (void)loadFromURL:initData:;
- (void)navigateLynxView:;
- (void)onReceiveTemplateFragment:withEof:;
- (void)onTemplateLoadSuccess:;
- (void)popTextLabel;
- (void)reloadLynxView:withTemplate:fromFragments:withSize:;
- (void)setTextLable:;
- (void).cxx_destruct;
- (id)getURL;
@end
