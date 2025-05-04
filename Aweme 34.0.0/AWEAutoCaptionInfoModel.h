@interface AWEAutoCaptionInfoModel : MTLModel
@property (nonatomic) NSString language;
@property (nonatomic) AWEAutoCaptionUrlModel url;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUrl:;
- (void)setLanguage:;
- (void).cxx_destruct;
- (id)language;
- (id)url;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)urlJSONTransformer;
@end
