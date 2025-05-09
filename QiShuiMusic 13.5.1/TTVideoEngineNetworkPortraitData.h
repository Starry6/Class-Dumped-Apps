@interface TTVideoEngineNetworkPortraitData : NSObject
@property (nonatomic) q mNetMinDataSize;
@property (nonatomic) q mNetLevelMaxCount;
@property (nonatomic) q mNetTimerTaskIntervalMs;
@property (nonatomic) NSMutableArray mCatowerRttList;
@property (nonatomic) NSMutableArray mCatowerRttMsList;
@property (nonatomic) NSMutableArray mNetTypeList;
@property (nonatomic) NSMutableArray mMdlSpeedList;
@property (nonatomic) <NetworkRTTLevelListener> RTTLevelListener;
@property (nonatomic) NSTimer timer;
@property (nonatomic) double mLastTargetBitrate;
@property (nonatomic) NSArray mParameters;
@property (nonatomic) NSString mVarsToParse;
@property (nonatomic) double mLinkFuncOffset;
- (id)RTTLevelListener;
- (double)mLinkFuncOffset;
- (long long)mNetMinDataSize;
- (void)setMinDataSize:;
- (void)setRttListener:;
- (id)getMdlSpeedList;
- (id)mCatowerRttList;
- (void)setMParameters:;
- (double)calculateTargetBitrate:speedList:netType:;
- (double)getLastTargetBitrate;
- (id)getNetSpeedHistoryData:;
- (id)getNetTypeList;
- (int)getRTTLevel;
- (int)getRTTMs;
- (id)getRttHistoryData:;
- (id)getRttList;
- (id)getRttMsHistoryData:;
- (id)getRttMsList;
- (id)getSubListToMeetMinSize:size:;
- (id)mCatowerRttMsList;
- (double)mLastTargetBitrate;
- (id)mMdlSpeedList;
- (long long)mNetLevelMaxCount;
- (long long)mNetTimerTaskIntervalMs;
- (id)mNetTypeList;
- (id)mParameters;
- (id)mVarsToParse;
- (void)parseVariable:;
- (void)rttListen;
- (void)setMCatowerRttList:;
- (void)setMCatowerRttMsList:;
- (void)setMLastTargetBitrate:;
- (void)setMLinkFuncOffset:;
- (void)setMMdlSpeedList:;
- (void)setMNetLevelMaxCount:;
- (void)setMNetMinDataSize:;
- (void)setMNetTimerTaskIntervalMs:;
- (void)setMNetTypeList:;
- (void)setMVarsToParse:;
- (void)setNetSpeed:;
- (void)setRTTLevelListener:;
- (void)setmVarsToParse:;
- (void)setnetType:;
- (void)startRttListen;
- (void)setSampleInterval:;
- (id)init;
- (void)dealloc;
- (void)setMaxCount:;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
+ (id)sharedInstance;
@end
