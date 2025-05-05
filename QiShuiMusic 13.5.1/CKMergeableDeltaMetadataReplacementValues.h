@interface CKMergeableDeltaMetadataReplacementValues : NSObject
@property (nonatomic) NSDictionary replacementDeltaMetadatas;
@property (nonatomic) NSSet removableDeltaMetadatas;
@property (nonatomic) CKMergeableDeltaMetadata updatedNextDeltaMetadata;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)removableDeltaMetadatas;
- (id)updatedNextDeltaMetadata;
- (id)replacementDeltaMetadatas;
- (void)setReplacementDeltaMetadatas:;
- (void)setRemovableDeltaMetadatas:;
- (void)setUpdatedNextDeltaMetadata:;
@end
