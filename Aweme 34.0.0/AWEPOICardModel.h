@interface AWEPOICardModel : AWEBaseApiModel
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) NSString url;
@property (nonatomic) NSString urlToLoad;
- (id)urlToLoad;
- (void)setUrlToLoad:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
- (BOOL)shouldShow;
- (void)setShouldShow:;
+ (id)JSONKeyPathsByPropertyKey;
@end
