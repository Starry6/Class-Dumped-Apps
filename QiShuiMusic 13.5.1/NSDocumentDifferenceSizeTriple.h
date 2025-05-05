@interface NSDocumentDifferenceSizeTriple : NSObject
@property (nonatomic) NSDocumentDifferenceSize dueToRecentChangesBeforeSaving;
@property (nonatomic) NSDocumentDifferenceSize betweenPreservingPreviousVersionAndSaving;
@property (nonatomic) NSDocumentDifferenceSize betweenPreviousSavingAndSaving;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)dueToRecentChangesBeforeSaving;
- (id)betweenPreservingPreviousVersionAndSaving;
- (id)betweenPreviousSavingAndSaving;
@end
