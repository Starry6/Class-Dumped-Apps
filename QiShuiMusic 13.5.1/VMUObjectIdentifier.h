@interface VMUObjectIdentifier : NSObject
@property (nonatomic) {_CSTypeRef=QQ} libobjcSymbolOwner;
@property (nonatomic) VMUSwiftRuntimeInfo swiftRuntimeInfoStableABI;
@property (nonatomic) VMUSwiftRuntimeInfo swiftRuntimeInfoPreABI;
@property (nonatomic) ^{libSwiftRemoteMirrorWrapper=^{SwiftReflectionInteropContext}Q} swiftMirror;
@property (nonatomic) BOOL hasSwiftContent;
@property (nonatomic) BOOL hasSwiftReflection;
@property (nonatomic) VMUTaskMemoryScanner scanner;
@property (nonatomic) I objcABI;
@property (nonatomic) NSMutableDictionary moduleNameToBinaryPathDict;
@property (nonatomic) Q figBaseObjectFinalizeAddress;
@property (nonatomic) Q swiftConcurrencyDebugAsyncTaskMetadataIsa;
@property (nonatomic) Q swiftConcurrencyDebugAsyncTaskSlabMetadataIsa;
@property (nonatomic) I task;
@property (nonatomic) BOOL taskIsDriverKit;
@property (nonatomic) @? memoryReader;
@property (nonatomic) VMUClassInfoMap realizedClasses;
@property (nonatomic) Q taggedPointerMask;
@property (nonatomic) {_CSTypeRef=QQ} symbolicator;
@property (nonatomic) I objectContentLevel;
@property (nonatomic) VMURangeArray readonlyRegionRanges;
@property (nonatomic) ^{VMUAutoreleasePoolPageLayout=IIIQI} autoreleasePoolPageLayout;
- (id)scanner;
- (id)symbolicator;
- (id)realizedClasses;
- (id)initWithTask:;
- (id)classNameForTaggedPointer:;
- (id)createAutoreleasePoolPageLayout;
- (void)loadSwiftReflectionLibraries;
- (void)dealloc;
- (id)classInfoForMemory:length:;
- (id)labelForObjectOfClass:atOffset:ofObject:;
- (unsigned long long)translateIsaPointer:;
- (void)_generateClassInfosForObjCClassStructurePointerTypes;
- (id)labelForNSConcreteData:length:remoteAddress:;
- (unsigned long long)swiftConcurrencyDebugAsyncTaskMetadataIsa;
- (id)labelForNSTaggedPointerStringCStringContainer:length:remoteAddress:;
- (id)labelForNSXPCConnection:length:remoteAddress:;
- (void)enumerateAllClassInfosWithBlock:;
- (id)initWithTask:symbolicator:;
- (id)labelForNSCFDictionary:length:remoteAddress:;
- (id)labelForNSConcreteHashTable:length:remoteAddress:;
- (id)vmRegionRangeForAddress:;
- (BOOL)_dlopenLibSwiftRemoteMirrorNearExecutable;
- (id)labelForOSXPCObject:length:remoteAddress:;
- (id)labelForProtocol:length:remoteAddress:;
- (unsigned int)task;
- (id)classInfoForObjCClassStructurePointerType:;
- (unsigned int)objcABI;
- (id)_symbolicator;
- (BOOL)_dlopenLibSwiftRemoteMirrorFromDir:;
- (void)findCFTypes;
- (void)_faultClass:ofType:;
- (id)classInfoWithNonobjectType:binaryPath:;
- (id)_scanner;
- (id)objectLabelHandlerForRemoteIsa:;
- (id)labelForCoreMediaFigObject:length:remoteAddress:;
- (id)labelForClassDataExtRW:length:remoteAddress:;
- (id)labelForNSDictionary:length:remoteAddress:;
- (id)labelForNSXPCInterface:length:remoteAddress:;
- (void)enumerateRealizedClassInfosWithBlock:;
- (void)destroy_libSwiftRemoteMirror;
- (id)labelForClassDataRO:length:remoteAddress:;
- (id)swiftRuntimeInfoStableABI;
- (id)uniquifyStringLabel:stringType:printDetail:;
- (id)labelForNSConcreteMutableData:length:remoteAddress:;
- (id)labelForMallocBlock:;
- (id)swiftRuntimeInfoPreABI;
- (unsigned long long)CFTypeCount;
- (void)flushMemoryCache;
- (id)_classInfoWithPthreadType:;
- (unsigned long long)SwiftClassCount;
- (id)_returnFaultedClass:ofType:;
- (id)libobjcSymbolOwner;
- (id)labelForNSBundle:length:remoteAddress:;
- (BOOL)_remoteAddressIsOKtoRead:;
- (id)memoryReader;
- (BOOL)hasSwiftContent;
- (id)labelForMallocBlock:usingHandlerBlock:;
- (void)setupIsaTranslator;
- (id)labelForNSPathStore2:length:remoteAddress:;
- (id)labelForNSInlineData:length:remoteAddress:;
- (id)labelForMemory:length:remoteAddress:classInfo:usingHandlerBlock:;
- (void)setReadonlyRegionRanges:;
- (id)classInfoForObjectWithRange:;
- (id)labelForNSArray:length:remoteAddress:;
- (id)labelForTaggedPointer:;
- (id)labelForItemCount:;
- (id)labelForSwiftStringStorage:length:remoteAddress:;
- (id)labelFor__NSMallocBlock__:length:remoteAddress:;
- (void)_loadSwiftAsyncTaskAndSlabRecognitionInfo;
- (id)labelForOSTransaction:length:remoteAddress:;
- (unsigned long long)taggedPointerMask;
- (unsigned int)classInfoIndexForObjCClassStructurePointerType:;
- (id)moduleNameToBinaryPathDict;
- (id)autoreleasePoolPageLayout;
- (id)labelForMemory:length:remoteAddress:;
- (id)_classInfoForMemory:length:atOffset:remoteAddress:;
- (void)findCFTypes_version2;
- (void).cxx_destruct;
- (void)findCFTypes_version1;
- (id)labelForNSData:length:remoteAddress:;
- (unsigned long long)swiftConcurrencyDebugAsyncTaskSlabMetadataIsa;
- (BOOL)taskIsDriverKit;
- (id)labelForNSURL:length:remoteAddress:;
- (void)_findOffsetsInOSXPCConnection:length:;
- (BOOL)hasSwiftReflection;
- (id)osMajorMinorVersionString;
- (BOOL)_dlopenLibSwiftRemoteMirrorNearLibSwiftCore;
- (BOOL)_isValidInstanceLength:expectedLength:;
- (id)labelForNSString:mappedSize:remoteAddress:printDetail:;
- (void)setObjectContentLevel:;
- (id)classInfoForNonobjectMemory:length:;
- (id)labelForNSCFStringAtRemoteAddress:printDetail:;
- (id)classInfoForMemory:length:remoteAddress:;
- (id)labelFor_NSActivityAssertion:length:remoteAddress:;
- (BOOL)isTaggedPointer:;
- (id)labelForClassStructure:length:remoteAddress:;
- (id)labelForOSDispatchMach:length:remoteAddress:;
- (void)findFutureClasses;
- (id)labelForNSConcreteAttributedString:length:remoteAddress:;
- (id)labelForNSDate:length:remoteAddress:;
- (id)labelForOSXPCActivity:length:remoteAddress:;
- (id)noLabelForOSXPCObject:length:remoteAddress:;
- (void)findObjCAndSwiftClasses;
- (id)labelForNSSet:length:remoteAddress:;
- (id)formattedDateLabel:;
- (id)labelForOSXPCConnection:length:remoteAddress:;
- (id)labelForCFBundle:length:remoteAddress:;
- (void)_populateSwiftABIVariables;
- (id)classInfoForCFTypeInstance:length:remoteAddress:;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)labelForOSDispatchQueue:length:remoteAddress:;
- (id)swiftMirror;
- (unsigned long long)ObjCclassCount;
- (id)labelForNSNumber:length:remoteAddress:;
- (BOOL)_dlopenLibSwiftRemoteMirror;
- (int)_populateSwiftReflectionInfo:;
- (id)labelForNSString:length:remoteAddress:;
- (void)_findObjCAndSwiftClassesFromClass:recursionDepth:;
- (id)labelForMemory:length:;
- (id)labelForMemory:length:remoteAddress:classInfo:;
- (unsigned long long)figBaseObjectFinalizeAddress;
- (id)labelForNSCFSet:length:remoteAddress:;
- (unsigned int)objectContentLevel;
- (id)labelForClassDataRW:length:remoteAddress:;
- (id)symbolForAddress:;
- (id)initWithTask:symbolicator:scanner:;
- (id)readonlyRegionRanges;
- (unsigned long long)addressOfSymbol:inLibrary:;
- (id)labelForOSLog:length:remoteAddress:;
@end
