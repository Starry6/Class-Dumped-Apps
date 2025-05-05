@interface BWDeferredCaptureAnalyticsPayload : NSObject
@property (nonatomic) NSInteger error;
@property (nonatomic) NSInteger processingType;
@property (nonatomic) BOOL fileBacked;
@property (nonatomic) I commitDurationInMilliseconds;
@property (nonatomic) I flushDurationInMilliseconds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setError:;
- (int)error;
- (id)eventName;
- (void)reset;
- (id)eventDictionary;
- (int)processingType;
- (void)setProcessingType:;
- (BOOL)fileBacked;
- (void)setFileBacked:;
- (unsigned int)commitDurationInMilliseconds;
- (void)setCommitDurationInMilliseconds:;
- (unsigned int)flushDurationInMilliseconds;
- (void)setFlushDurationInMilliseconds:;
@end
