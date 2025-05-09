@interface HMDOTTrace : NSObject
@property (nonatomic) Q localID;
@property (nonatomic) Q sequenceCode;
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSString traceID;
@property (nonatomic) q startTimestamp;
@property (nonatomic) q finishTimestamp;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString updateVersionCode;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString sessionID;
@property (nonatomic) Q isFinished;
@property (nonatomic) Q hitRules;
@property (nonatomic) NSNumber sampleRate;
@property (nonatomic) BOOL isForcedUpload;
@property (nonatomic) NSDictionary tags;
@property (nonatomic) BOOL needCache;
@property (nonatomic) BOOL isAbandoned;
@property (nonatomic) NSMutableArray cachedSpans;
@property (nonatomic) NSMutableArray spanIdList;
@property (nonatomic) NSLock cacheLock;
@property (nonatomic) NSLock idListLock;
@property (nonatomic) Q insertMode;
@property (nonatomic) BOOL isMovingLine;
@property (nonatomic) NSString traceType;
@property (nonatomic) Q hasError;
@property (nonatomic) NSString latestSpanID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)finishTimestamp;
- (void)finishWithDate:;
- (id)obtainTraceTags;
- (void)setCachedSpans:;
- (void)setIsAbandoned:;
- (void)abandonCurrentTrace;
- (void)addOneSpanID:;
- (id)allCachedSpans;
- (void)cacheCallbackSpans:;
- (void)cacheOneSpan:;
- (id)cachedSpans;
- (void)decideInsertPolicy;
- (void)decideInsertPolicyWithMode:;
- (void)finishAfterDelay:;
- (unsigned long long)hitRules;
- (id)idListLock;
- (unsigned long long)insertMode;
- (BOOL)isAbandoned;
- (BOOL)isForcedUpload;
- (BOOL)isMovingLine;
- (id)latestSpanID;
- (BOOL)needCache;
- (id)obtainSpanIDList;
- (void)resetTraceStartDate:;
- (unsigned long long)sequenceCode;
- (void)setFinishTimestamp:;
- (void)setHitRules:;
- (void)setIdListLock:;
- (void)setInsertMode:;
- (void)setIsForcedUpload:;
- (void)setIsMovingLine:;
- (void)setLatestSpanID:;
- (void)setNeedCache:;
- (void)setSequenceCode:;
- (void)setSpanIdList:;
- (void)setTag:value:;
- (void)setTraceID:;
- (void)setUpdateVersionCode:;
- (id)spanIdList;
- (void)updateHitRules;
- (id)updateVersionCode;
- (void)setSessionID:;
- (void)setAppVersion:;
- (id)sessionID;
- (id)appVersion;
- (unsigned long long)hasError;
- (id)tags;
- (id)osVersion;
- (void)dealloc;
- (void)setTags:;
- (id)sampleRate;
- (void)setHasError:;
- (void)setServiceName:;
- (id)cacheLock;
- (void)finish;
- (id)serviceName;
- (long long)startTimestamp;
- (void)setCacheLock:;
- (void)setStartTimestamp:;
- (unsigned long long)isFinished;
- (void)setOsVersion:;
- (id)traceID;
- (void).cxx_destruct;
- (unsigned long long)localID;
- (void)setSampleRate:;
- (void)setIsFinished:;
- (id)traceType;
- (void)setTraceType:;
- (id)reportDictionary;
- (void)setLocalID:;
+ (id)bg_ignoreKeys;
+ (void)enableDebugUpload;
+ (void)ignoreUnfinishedTraceAssert;
+ (id)startTrace:;
+ (id)startTrace:startDate:;
+ (id)startTrace:startDate:insertMode:;
+ (id)startTraceWithConfig:;
+ (id)tableName;
@end
