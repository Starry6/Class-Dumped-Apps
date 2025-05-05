@interface VMUStackLogConsolidator : NSObject
@property (nonatomic) VMUDebugTimer debugTimer;
- (void)setDebugTimer:;
- (void).cxx_destruct;
- (id)debugTimer;
- (id)initWithGraph:stackLogReader:;
- (id)initWithScannerOrGraph:stackLogReader:;
- (id)stackIDsToNodesFilteredBy:;
- (id)callTreeWithOptions:nodeFilter:;
@end
