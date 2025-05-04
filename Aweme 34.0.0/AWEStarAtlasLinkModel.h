@interface AWEStarAtlasLinkModel : AWEAdLinkModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString linkID;
@property (nonatomic) NSString downloadURL;
@property (nonatomic) NSString complianceData;
- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:;
- (void)setComplianceData:;
- (id)complianceData;
- (id)componentSeparator;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)downloadURL;
- (void)setDownloadURL:;
- (id)iconImageName;
- (id)linkID;
- (void)setLinkID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
