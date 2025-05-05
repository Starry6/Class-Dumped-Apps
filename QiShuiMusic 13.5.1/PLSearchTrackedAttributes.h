@interface PLSearchTrackedAttributes : NSObject
@property (nonatomic) NSArray assetAttributesTrackedForSearch;
@property (nonatomic) NSArray mediaAnalysisAssetAttributesTrackedForSearch;
@property (nonatomic) NSArray managedAlbumAttributesTrackedForSearch;
@property (nonatomic) NSArray fetchingAlbumAttributesTrackedForSearch;
@property (nonatomic) NSArray memoryAttributesTrackedForSearch;
@property (nonatomic) NSArray highlightAttributesTrackedForSearch;
@property (nonatomic) NSArray personAttributesTrackedForSearch;
@property (nonatomic) NSArray detectedFaceAttributesTrackedForSearch;
- (void).cxx_destruct;
- (id)assetAttributesTrackedForSearch;
- (id)mediaAnalysisAssetAttributesTrackedForSearch;
- (id)managedAlbumAttributesTrackedForSearch;
- (id)fetchingAlbumAttributesTrackedForSearch;
- (id)memoryAttributesTrackedForSearch;
- (id)highlightAttributesTrackedForSearch;
- (id)personAttributesTrackedForSearch;
- (id)detectedFaceAttributesTrackedForSearch;
- (void)setAssetAttributesTrackedForSearch:;
- (void)setMediaAnalysisAssetAttributesTrackedForSearch:;
- (void)setManagedAlbumAttributesTrackedForSearch:;
- (void)setFetchingAlbumAttributesTrackedForSearch:;
- (void)setMemoryAttributesTrackedForSearch:;
- (void)setHighlightAttributesTrackedForSearch:;
- (void)setPersonAttributesTrackedForSearch:;
- (void)setDetectedFaceAttributesTrackedForSearch:;
@end
