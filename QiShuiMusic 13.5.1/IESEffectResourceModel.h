@interface IESEffectResourceModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
@property (nonatomic) NSString resourceURI;
@property (nonatomic) NSArray fileDownloadURLs;
@property (nonatomic) NSString filePath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fileDownloadURLs;
- (void)genFileDownloadURLsWithURLPrefixes:;
- (id)resourceURI;
- (id)filePath;
- (void).cxx_destruct;
- (id)value;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
