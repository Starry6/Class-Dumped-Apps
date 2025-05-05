@interface IDSServerMaterialExchangeController : NSObject
@property (nonatomic) <IDSServerMaterialExchangeDelegate> delegate;
@property (nonatomic) NSString sessionID;
- (id)sessionID;
- (void)setNeedsUpdate;
- (id)delegate;
- (void).cxx_destruct;
- (void)update;
- (id)initWithDelegate:;
- (id)currentlySentMaterials;
- (id)desiredMaterials;
- (void)setDesiredMaterialsForSession:materials:signer:;
- (id)buildMaterialInfoForDesiredMaterialData:materialType:materialID:sessionID:requireSign:;
- (id)_buildMaterialInfoForDesiredMaterialDataNoSignature:materialType:materialID:sessionID:;
- (id)_buildMaterialInfoForDesiredMaterialDataRequireSignature:materialType:materialID:sessionID:;
- (id)materialProtosForDesiredMaterials:failures:;
- (id)pendingMaterials;
- (void)invalidateMaterialsInSet:;
- (void)invalidateMaterialsInArray:;
- (void)markMaterialsInSetAsSent:;
- (void)markMaterialsInArrayAsSent:;
@end
