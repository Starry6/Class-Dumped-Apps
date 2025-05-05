@interface BDXBridgeAppShareV2CommonInfo : BDXBridgeModel
@property (nonatomic) NSDictionary get_share_info_params;
@property (nonatomic) NSDictionary entity_params;
- (id)entity_params;
- (id)get_share_info_params;
- (void)setEntity_params:;
- (void)setGet_share_info_params:;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
