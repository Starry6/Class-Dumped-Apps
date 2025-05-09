@interface AWENaviAnchorNode : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) q type;
@property (nonatomic) NSString anchorId;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString openUrl;
@property (nonatomic) NSString content;
@property (nonatomic) NSString icon;
@property (nonatomic) q source;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorId;
- (void)setAnchorId:;
- (id)openUrl;
- (void)setOpenUrl:;
- (id)tag;
- (id)init;
- (id)content;
- (id)icon;
- (void)setTag:;
- (long long)type;
- (void)setContent:;
- (void)setType:;
- (void)setIcon:;
- (void).cxx_destruct;
- (long long)source;
- (id)title;
- (void)setSource:;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
