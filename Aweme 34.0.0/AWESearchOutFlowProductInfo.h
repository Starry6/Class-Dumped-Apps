@interface AWESearchOutFlowProductInfo : MTLModel
@property (nonatomic) AWESearchOutFlowIconModel outflowIcon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString webTitle;
@property (nonatomic) NSString source;
@property (nonatomic) NSString webUrl;
@property (nonatomic) NSString openUrl;
@property (nonatomic) NSString ironManURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWebTitle:;
- (void)setIronManURL:;
- (id)openUrl;
- (id)webTitle;
- (id)ironManURL;
- (void)setOpenUrl:;
- (id)outflowIcon;
- (void)setOutflowIcon:;
- (void).cxx_destruct;
- (id)source;
- (id)title;
- (void)setSource:;
- (void)setTitle:;
- (void)setWebUrl:;
- (id)webUrl;
+ (id)JSONKeyPathsByPropertyKey;
@end
