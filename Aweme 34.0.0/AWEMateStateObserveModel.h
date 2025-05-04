@interface AWEMateStateObserveModel : NSObject
@property (nonatomic) AWECodeGenMateRelationModel originalMateRelation;
@property (nonatomic) AWECodeGenMateRelationModel updatedMateRelation;
@property (nonatomic) AWEUserModel userModel;
- (id)originalMateRelation;
- (id)updatedMateRelation;
- (void)setOriginalMateRelation:;
- (void)setUpdatedMateRelation:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
@end
