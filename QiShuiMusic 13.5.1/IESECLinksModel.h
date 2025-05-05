@interface IESECLinksModel : MTLModel
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString appURL;
@property (nonatomic) NSString innerAppURL;
@property (nonatomic) NSString universalLinksURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInnerAppURL:;
- (id)innerAppURL;
- (void)setUniversalLinksURL:;
- (id)universalLinksURL;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:;
- (id)appURL;
- (void)setAppURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
