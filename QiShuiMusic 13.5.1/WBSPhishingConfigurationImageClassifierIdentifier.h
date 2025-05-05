@interface WBSPhishingConfigurationImageClassifierIdentifier : NSObject
@property (nonatomic) NSString domainName;
@property (nonatomic) float minimumConfidence;
- (id)domainName;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (float)minimumConfidence;
- (id)initWithDomain:minimumConfidence:;
@end
