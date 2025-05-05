@interface IESECWebImageTemplateRule : MTLModel
@property (nonatomic) NSString pattern;
@property (nonatomic) q sizeOption;
@property (nonatomic) q remakeType;
@property (nonatomic) IESECWebImageTemplateFormat templateFormat;
@property (nonatomic) NSDictionary templateGroupFormats;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)remakeType;
- (void)setRemakeType:;
- (void)setSizeOption:;
- (void)setTemplateFormat:;
- (void)setTemplateGroupFormats:;
- (long long)sizeOption;
- (id)templateFormat;
- (id)templateGroupFormats;
- (id)pattern;
- (void).cxx_destruct;
- (void)setPattern:;
+ (id)templateGroupFormatsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
