@interface AWEPublishTimeTracker : NSObject
@property (nonatomic) NSMutableDictionary eventBeginDictionary;
@property (nonatomic) NSMutableDictionary eventEndDictionary;
@property (nonatomic) NSMutableDictionary eventExtraInfoDictionary;
@property (nonatomic) NSMutableArray backgroundEventBeginArray;
@property (nonatomic) NSMutableArray backgroundEventEndArray;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) double backgroundStart;
@property (nonatomic) q backgroundDuration;
@property (nonatomic) BOOL startTracker;
@property (nonatomic) NSString awemeID;
@property (nonatomic) double composePauseDuration;
@property (nonatomic) BOOL isPreUploading;
@property (nonatomic) BOOL isTriggerInEdit;
@property (nonatomic) NSString publishTaskType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didWholeEndWithResult:error:;
- (BOOL)startTracker;
- (void)appWillResignActiveNotification;
- (void)appDidBecomeActiveNotification;
- (void)setAwemeID:;
- (id)awemeID;
- (long long)backgroundDuration;
- (void)setBackgroundDuration:;
- (id)eventBeginDictionary;
- (id)eventEndDictionary;
- (void)eventBegin:;
- (void)eventEnd:;
- (void)setEventBeginDictionary:;
- (void)setEventEndDictionary:;
- (void)setIsTriggerInEdit:;
- (void)setStartTracker:;
- (BOOL)isTriggerInEdit;
- (void)setPublishTaskType:;
- (void)setIsPreUploading:;
- (void)eventBegin:isForce:;
- (void)event:resourceInfo:;
- (void)setComposePauseDuration:;
- (double)composePauseDuration;
- (double)durationWithEvent:;
- (id)eventExtraInfoDictionary;
- (id)backgroundEventBeginArray;
- (id)formatBackgroundEventWithArray:;
- (id)backgroundEventEndArray;
- (BOOL)isPreUploading;
- (id)publishTaskType;
- (id)uploadVideoResolutionForURL:;
- (void)setBackgroundStart:;
- (double)backgroundStart;
- (void)trackerTimeForTask:;
- (void)setEventExtraInfoDictionary:;
- (void)setBackgroundEventBeginArray:;
- (void)setBackgroundEventEndArray:;
- (id)init;
- (void)dealloc;
- (void)removeEvent:;
- (void)clear;
- (void).cxx_destruct;
- (BOOL)inBackground;
- (void)setInBackground:;
@end
