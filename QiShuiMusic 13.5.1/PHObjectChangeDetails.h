@interface PHObjectChangeDetails : NSObject
@property (nonatomic) BOOL assetCollectionTitlePropertiesChanged;
@property (nonatomic) PHObject objectBeforeChanges;
@property (nonatomic) PHObject objectAfterChanges;
@property (nonatomic) BOOL assetContentChanged;
@property (nonatomic) BOOL objectWasDeleted;
- (void).cxx_destruct;
- (id)description;
- (BOOL)assetContentChanged;
- (id)initWithPHObject:;
- (id)objectBeforeChanges;
- (id)objectAfterChanges;
- (void)_calculateDiffs;
- (BOOL)assetCollectionTitlePropertiesChanged;
- (BOOL)objectWasDeleted;
@end
