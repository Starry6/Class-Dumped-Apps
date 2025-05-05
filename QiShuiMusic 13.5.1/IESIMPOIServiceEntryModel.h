@interface IESIMPOIServiceEntryModel : IESIMBaseApiModel
@property (nonatomic) Q schemaType;
@property (nonatomic) NSString url;
@property (nonatomic) Q platformSource;
@property (nonatomic) NSString platformName;
- (unsigned long long)platformSource;
- (void)setPlatformSource:;
- (void)setSchemaType:;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
- (unsigned long long)schemaType;
- (id)platformName;
- (void)setPlatformName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
