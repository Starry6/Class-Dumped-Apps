@interface WBSPhishingConfiguration : NSObject
@property (nonatomic) Q imageCropAndScaleOption;
@property (nonatomic) {CGSize=dd} imageInputSize;
@property (nonatomic) NSString version;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)version;
- (id)initWithDictionary:error:;
- (id)initWithPlistData:error:;
- (id)plistDataWithFormat:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)imageCropAndScaleOption;
- (BOOL)_parseOverrides:error:;
- (BOOL)_parseDomains:error:;
- (BOOL)_parseImageClassifierIdentifiers:error:;
- (id)_sanitizeURL:;
- (unsigned long long)classifyURL:error:;
- (unsigned long long)classifyURL:imageClassifierIdentifier:imageClassifierConfidence:error:;
- (id)imageInputSize;
@end
