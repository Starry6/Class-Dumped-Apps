@interface MLModelMetadata : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString shortDescription;
@property (nonatomic) NSString versionString;
@property (nonatomic) NSString author;
@property (nonatomic) NSString license;
@property (nonatomic) NSDictionary creatorDefined;
- (id)versionString;
- (id)shortDescription;
- (id)author;
- (id)initWithName:;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)name;
- (id)license;
- (id)initWithName:shortDescription:versionString:author:license:creatorDefined:;
- (id)creatorDefined;
@end
