@interface AWEGeneralSearchPatchCachalotModel : AWEBaseApiModel
@property (nonatomic) NSString type;
@property (nonatomic) NSArray deletefps;
@property (nonatomic) NSArray businessData;
@property (nonatomic) NSArray renderInfo;
@property (nonatomic) NSDictionary structData;
@property (nonatomic) NSDictionary reorderStruct;
@property (nonatomic) NSArray patchData;
- (id)businessData;
- (void)setBusinessData:;
- (void)setRenderInfo:;
- (id)structData;
- (void)setStructData:;
- (void)setPatchData:;
- (void)setDeletefps:;
- (void)setReorderStruct:;
- (id)deletefps;
- (id)reorderStruct;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)patchData;
- (id)renderInfo;
+ (id)patchOperationsModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
