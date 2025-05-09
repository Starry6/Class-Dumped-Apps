@interface VMUGraphStackLogReader : VMUStackLogReaderBase
@property (nonatomic) VMUProcessObjectGraph graph;
@property (nonatomic) NSData diskLogs;
@property (nonatomic) I task;
@property (nonatomic) BOOL is64bit;
@property (nonatomic) BOOL inspectingLiveProcess;
@property (nonatomic) BOOL usesLiteMode;
@property (nonatomic) BOOL coldestFrameIsNotThreadId;
@property (nonatomic) VMUVMRegionTracker regionTracker;
@property (nonatomic) {_CSTypeRef=QQ} symbolicator;
@property (nonatomic) NSSet excludedFrames;
@property (nonatomic) Q nodesInUniquingTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)graph;
- (void)setGraph:;
- (void)dealloc;
- (long long)getFramesForStackID:stackFramesBuffer:;
- (id)vmuVMRegionForAddress:;
- (void)setDiskLogs:;
- (long long)getFramesForNode:inLiteZone:stackFramesBuffer:;
- (id)binaryImagePathForPCaddress:;
- (id)functionRangeContainingPCaddress:;
- (unsigned long long)stackIDForNode:;
- (id)initWithCoder:;
- (void)streamFullStackLogsToBlock:;
- (void)enumerateUniquingTable:;
- (void)populateBacktraceUniquingTableWithStackLogs:;
- (void)_setFunctionName:forPCAddressRange:;
- (void)encodeWithCoder:;
- (unsigned long long)nodesInUniquingTable;
- (id)binaryImageRangeForPCaddress:;
- (BOOL)inspectingLiveProcess;
- (id)sourcePathForPCaddress:;
- (int)enumerateMSLRecordsAndPayloads:;
- (long long)getFramesForAddress:size:inLiteZone:stackFramesBuffer:;
- (void).cxx_destruct;
- (BOOL)is64bit;
- (void)symbolicateBacktraceUniquingTable;
- (void)_setSourcePath:lineNumber:forPCAddressRange:;
- (void)_parseSourceInfoString:intoComponents:;
- (id)sourceFileNameAndLineNumberForPCaddress:fullPath:;
- (id)sourceLineRangeContainingPCaddress:;
- (id)functionNameForPCaddress:;
- (BOOL)copyOriginalUniquingTable:;
- (id)diskLogs;
- (unsigned int)sourceLineNumberForPCaddress:;
- (id)initWithTask:symbolicator:graph:debugTimer:collectDisklogs:;
- (id)sourceFileNameForPCaddress:;
+ (BOOL)supportsSecureCoding;
@end
