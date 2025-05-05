@interface MLGKDecisionTree : NSObject
@property (nonatomic) NSMutableArray _attributes;
@property (nonatomic) NSMutableOrderedSet _objectStore;
- (id)_attributes;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;
- (id)_initWithFlattenedTree:;
- (BOOL)_saveModelAssetWithModelToPath:withError:;
- (void)_loadModelAssetWithModelAtPath:withError:;
- (id)_makeInferenceFromAnswers:withError:;
- (void)set_attributes:;
- (id)_objectStore;
- (void)set_objectStore:;
@end
