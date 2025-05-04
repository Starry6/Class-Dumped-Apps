@interface AWETheaterSectionItemBaseInfo : MTLModel
@property (nonatomic) NSString itemTitle;
@property (nonatomic) NSString itemSubtitle;
@property (nonatomic) NSString schema;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSString videoPlayAddr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)videoPlayAddr;
- (void)setVideoPlayAddr:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)itemTitle;
- (void)setItemTitle:;
- (id)itemSubtitle;
- (void)setItemSubtitle:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
