@interface BDXBridgePlayerChangePlaySourcePlayableList : BDXBridgeModel
@property (nonatomic) NSString id;
@property (nonatomic) NSString entity_json;
@property (nonatomic) BDXBridgePlayerChangePlaySourceRecCommentContentInfo rec_comment_content_info;
@property (nonatomic) q type;
- (void)setEntity_json:;
- (id)entity_json;
- (id)rec_comment_content_info;
- (void)setRec_comment_content_info:;
- (id)id;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (void)setId:;
+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
