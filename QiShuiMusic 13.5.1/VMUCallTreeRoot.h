@interface VMUCallTreeRoot : VMUCallTreeNode
@property (nonatomic) NSString binaryImagesDescription;
- (void)dealloc;
- (id)binaryImagesDescription;
- (void).cxx_destruct;
- (void)setStackLogReader:;
- (void)setBinaryImagesDescription:;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:;
- (id)initWithSymbolicator:sampler:options:;
- (void)setVMRegions:;
- (void)setCambriaRuntimeVMObjectID:;
- (void)allBacktracesHaveBeenAdded;
- (id)descriptionStringForAddress:atTime:leafFrame:startOfRecursion:;
- (id)addBacktrace:count:numBytes:;
- (id)addBacktrace:;
- (id)addChildWithName:address:count:numBytes:toNode:;
- (id)addUniqueChildWithName:address:count:numBytes:toNode:;
- (id)addUniqueChildWithName:address:count:numBytes:toNode:isLeafNode:;
- (void)addChildCountsIntoNode;
- (id)initWithCallGraphFile:fileHeader:topFunctionsList:binaryImagesList:;
@end
