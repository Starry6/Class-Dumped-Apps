@interface VEAmazingSubFeatureChangeset : NSObject
@property (nonatomic) NSDictionary addedSubFeatures;
@property (nonatomic) NSDictionary deletedSubFeatures;
@property (nonatomic) NSDictionary updatedSubFeatures;
@property (nonatomic) BOOL isEmpty;
- (id)addedSubFeatures;
- (id)deletedSubFeatures;
- (id)initWithSource:target:;
- (void)setAddedSubFeatures:;
- (void)setDeletedSubFeatures:;
- (void)setUpdatedSubFeatures:;
- (id)updatedSubFeatures;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)setIsEmpty:;
@end
