@interface CKGenericTemplateFile : MTLModel
@property (nonatomic) NSString md5;
@property (nonatomic) NSString fileSize;
@property (nonatomic) NSString url;
@property (nonatomic) NSString json;
@property (nonatomic) NSString summary;
@property (nonatomic) NSArray dependency;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fileSize;
- (id)url;
- (id)json;
- (void)setUrl:;
- (id)summary;
- (void).cxx_destruct;
- (id)md5;
- (void)setMd5:;
- (id)dependency;
+ (id)JSONKeyPathsByPropertyKey;
@end
