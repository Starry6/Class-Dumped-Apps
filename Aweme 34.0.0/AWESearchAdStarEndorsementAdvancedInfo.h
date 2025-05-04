@interface AWESearchAdStarEndorsementAdvancedInfo : MTLModel
@property (nonatomic) AWEURLModel imageInfo;
@property (nonatomic) NSString title;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString webTitle;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString ironManURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWebTitle:;
- (void)setOpenURL:;
- (void)setIronManURL:;
- (id)webTitle;
- (id)ironManURL;
- (void)setWebURL:;
- (void).cxx_destruct;
- (id)title;
- (id)webURL;
- (void)setTitle:;
- (id)imageInfo;
- (void)setImageInfo:;
- (id)openURL;
+ (id)imageInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
