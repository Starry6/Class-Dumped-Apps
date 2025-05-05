@interface IESIMPOICardModel : IESIMBaseApiModel
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) NSString url;
@property (nonatomic) NSString urlToLoad;
- (void)setUrlToLoad:;
- (id)urlToLoad;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)setShouldShow:;
+ (id)JSONKeyPathsByPropertyKey;
@end
