@interface VNANFDMultiDetectorOriginalRequestInfo : NSObject
@property (nonatomic) NSString originatingRequestSpecifierKey;
@property (nonatomic) Q originalRequestResultsIndex;
- (unsigned long long)originalRequestResultsIndex;
- (id)originatingRequestSpecifierKey;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOriginatingRequestSpecifierProcessingOptionKey:originalRequestResultsIndex:;
+ (id)originatingRequestSpecifierToDetectorClassMap;
+ (id)requestClassNameFromRequestKey:;
+ (id)requestKeyFromRequest:;
+ (id)requestPropertiesFromRequestKey:;
@end
