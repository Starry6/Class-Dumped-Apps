@interface AWEPublishFirstFrameTracker : NSObject
@property (nonatomic) NSMutableArray eventArray;
@property (nonatomic) NSMutableDictionary eventBeginDictionary;
@property (nonatomic) NSMutableDictionary eventEndDictionary;
- (id)eventBeginDictionary;
- (id)eventEndDictionary;
- (void)eventBegin:;
- (void)eventEnd:;
- (void)setEventBeginDictionary:;
- (void)setEventEndDictionary:;
- (void)finishTrack:;
- (void)addPublishFirstFrameNewEvent:;
- (unsigned long long)dateFormatWithCAMediaTime:;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)eventArray;
- (void)setEventArray:;
+ (id)sharedTracker;
@end
