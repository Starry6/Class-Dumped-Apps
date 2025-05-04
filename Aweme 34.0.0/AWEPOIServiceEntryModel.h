@interface AWEPOIServiceEntryModel : AWEBaseApiModel
@property (nonatomic) Q schemaType;
@property (nonatomic) NSString url;
@property (nonatomic) Q platformSource;
@property (nonatomic) NSString platformName;
- (void)setSchemaType:;
- (unsigned long long)platformSource;
- (void)setPlatformSource:;
- (unsigned long long)schemaType;
- (void)setUrl:;
- (id)platformName;
- (void).cxx_destruct;
- (id)url;
- (void)setPlatformName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
