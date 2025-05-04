@interface AWEProfileLCPayloadModel : MTLModel
@property (nonatomic) NSDictionary dataMaps;
@property (nonatomic) NSString log_id;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setLog_id:;
- (id)dataMaps;
- (void)setDataMaps:;
- (id)extra;
- (void).cxx_destruct;
- (void)setValue:forUndefinedKey:;
- (id)log_id;
+ (id)dataMapsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
