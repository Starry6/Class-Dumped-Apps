@interface AWEChallengeDownloadComponent : MTLModel
@property (nonatomic) NSString linkText;
@property (nonatomic) AWEChallengeDownloadInfoModel downloadInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)linkText;
- (void)setLinkText:;
- (id)downloadInfo;
- (void)setDownloadInfo:;
+ (id)downloadInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
