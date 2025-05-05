@interface ICMediaAPIURLMappingSet : NSObject
@property (nonatomic) NSArray responsePayload;
- (void).cxx_destruct;
- (id)initWithResponsePayload:;
- (id)responsePayload;
- (void)enumerateMappingsUsingBlock:;
- (id)mappingsForFeatureName:;
@end
