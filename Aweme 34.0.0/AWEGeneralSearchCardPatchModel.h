@interface AWEGeneralSearchCardPatchModel : MTLModel
@property (nonatomic) NSString fingerprint;
@property (nonatomic) NSArray operations;
@property (nonatomic) AWEGeneralSearchModel patchedModel;
@property (nonatomic) NSDictionary patchedPaths;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)patchedModel;
- (id)patchedPaths;
- (void)setPatchedModel:;
- (void)setPatchedPaths:;
- (id)operations;
- (id)fingerprint;
- (void)setOperations:;
- (void).cxx_destruct;
- (void)setFingerprint:;
+ (id)JSONKeyPathsByPropertyKey;
@end
