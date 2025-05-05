@interface IESEffectURLInfoModel : MTLModel
@property (nonatomic) NSString downloadURI;
@property (nonatomic) NSArray downloadURLs;
@property (nonatomic) Q urlType;
@property (nonatomic) NSString md5;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)downloadURI;
- (id)downloadURLs;
- (void)setDownloadURLs:;
- (void)setURLPrefix:;
- (unsigned long long)urlType;
- (void).cxx_destruct;
- (id)md5;
+ (id)JSONKeyPathsByPropertyKey;
@end
