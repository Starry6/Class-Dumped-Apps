@interface HMDCrashInfo : HMDCrashModel
@property (nonatomic) NSArray regions;
@property (nonatomic) HMDImageOpaqueLoader imageLoader;
@property (nonatomic) NSArray currentlyUsedImages;
@property (nonatomic) HMDCrashMetaData meta;
@property (nonatomic) HMDCrashHeaderInfo headerInfo;
@property (nonatomic) NSArray threads;
@property (nonatomic) HMDCrashThreadInfo stackRecord;
@property (nonatomic) NSArray queueNames;
@property (nonatomic) NSArray threadNames;
@property (nonatomic) HMDCrashProcessState processState;
@property (nonatomic) HMDCrashStorage storage;
@property (nonatomic) NSDictionary dynamicInfo;
@property (nonatomic) NSDictionary extraDynamicInfo;
@property (nonatomic) NSArray vids;
@property (nonatomic) HMDCrashRuntimeInfo runtimeInfo;
@property (nonatomic) NSArray registerAnalysis;
@property (nonatomic) NSArray stackAnalysis;
@property (nonatomic) BOOL isEnvAbnormal;
@property (nonatomic) BOOL isCorrupted;
@property (nonatomic) BOOL fileIOError;
@property (nonatomic) NSString sdklog;
@property (nonatomic) NSString processLog;
@property (nonatomic) BOOL isComplete;
@property (nonatomic) BOOL isInvalid;
@property (nonatomic) NSString gameScriptStack;
@property (nonatomic) NSDate exceptionFileModificationDate;
@property (nonatomic) BOOL hasDump;
@property (nonatomic) BOOL hasGWPAsan;
@property (nonatomic) NSString crashLog;
- (BOOL)hasDump;
- (void)setDynamicInfo:;
- (void)setFileIOError:;
- (void)setStackRecord:;
- (void)setThreadNames:;
- (id)gameScriptStack;
- (void)setRuntimeInfo:;
- (id)crashLog;
- (id)currentlyUsedImages;
- (id)exceptionFileModificationDate;
- (id)extraDynamicInfo;
- (BOOL)fileIOError;
- (BOOL)hasGWPAsan;
- (id)headerInfo;
- (BOOL)isEnvAbnormal;
- (id)processLog;
- (id)queueNames;
- (id)registerAnalysis;
- (id)runtimeInfo;
- (id)sdklog;
- (void)setCrashLog:;
- (void)setCurrentlyUsedImages:;
- (void)setExceptionFileModificationDate:;
- (void)setExtraDynamicInfo:;
- (void)setGameScriptStack:;
- (void)setHasDump:;
- (void)setHasGWPAsan:;
- (void)setHeaderInfo:;
- (void)setIsEnvAbnormal:;
- (void)setQueueNames:;
- (void)setRegisterAnalysis:;
- (void)setSdklog:;
- (void)setStackAnalysis:;
- (void)setThreads:;
- (void)setVids:;
- (id)stackAnalysis;
- (id)stackRecord;
- (void)tag:format:args:;
- (id)threadNames;
- (id)vids;
- (id)meta;
- (BOOL)isComplete;
- (id)init;
- (id)imageLoader;
- (id)regions;
- (id)dynamicInfo;
- (void)setProcessState:;
- (void)setStorage:;
- (void)setIsCorrupted:;
- (void)setMeta:;
- (BOOL)isInvalid;
- (id)storage;
- (BOOL)isCorrupted;
- (void)setRegions:;
- (void).cxx_destruct;
- (id)processState;
- (id)threads;
- (void)setImageLoader:;
- (void)error:;
- (void)setIsInvalid:;
- (void)info:;
- (void)warn:;
@end
