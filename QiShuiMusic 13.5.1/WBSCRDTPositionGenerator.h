@interface WBSCRDTPositionGenerator : NSObject
@property (nonatomic) <WBSCRDTPositionGeneratorDelegate> delegate;
- (id)init;
- (id)positionForBookmarkWithRecordName:;
- (void)_enumerateRecordNamesAfterRecordWithName:usingBlock:;
- (id)_stridesForSiblingRecords:;
- (id)delegate;
- (id)_generatePositionBetweenPosition:andPosition:;
- (id)_positionForRecordName:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)generatePositionsForChildRecordNamesGroupedByParentFolders:;
- (void)_enumerateRecordNamesBeforeRecordWithName:usingBlock:;
- (id)_generatePositionsForStrides:;
@end
