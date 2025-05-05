@interface VEAmazingFeatureChangeset : NSObject
@property (nonatomic) NSArray addedFeatures;
@property (nonatomic) NSArray deletedFeatures;
@property (nonatomic) NSArray updatedFeatures;
@property (nonatomic) BOOL isEmpty;
- (id)deletedFeatures;
- (id)updatedFeatures;
- (id)addedFeatures;
- (id)initWithSource:target:;
- (void)setAddedFeatures:;
- (void)setDeletedFeatures:;
- (void)setUpdatedFeatures:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)description;
- (void)setIsEmpty:;
@end
