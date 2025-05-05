@interface ML3LanguageResources : NSObject
@property (nonatomic) NSDictionary sectionsInfo;
@property (nonatomic) NSDictionary sortingDetails;
@property (nonatomic) NSString canonicalLanguageIdentifier;
- (id)sortingDetails;
- (id)initWithSectionsInfo:sortingDetails:canonicalLanguageIdentifier:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)sectionsInfo;
- (void).cxx_destruct;
- (id)canonicalLanguageIdentifier;
+ (BOOL)supportsSecureCoding;
@end
