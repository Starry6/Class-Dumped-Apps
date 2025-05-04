@interface AWEGeneralSearchPatchOperationModel : AWEBaseApiModel
@property (nonatomic) NSString type;
@property (nonatomic) NSArray patchOperationDataArray;
- (id)patchOperationDataArray;
- (void)setPatchOperationDataArray:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
