@interface AWEIMWatchOnceMessageManager : NSObject
@property (nonatomic) NSMutableDictionary readingMessages;
@property (nonatomic) <AWEIMWatchOnceMessageManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)watchOnceMediaLoopTimes;
- (BOOL)isReadingWatchOnceMessage:;
- (void)beginReadWithWatchOnceMessages:;
- (void)readFinishWithWatchOnceMessages:;
- (void)clearReadingMessage;
- (void)setWatchOnceTextModel:conversation:;
- (void)setWatchOnceQuickPhotoModel:conversation:;
- (BOOL)isSupportWatchOnceText:;
- (BOOL)isInWatchOnceTextModel:;
- (BOOL)isInWatchOnceQuickPhotoModel:;
- (void)setReadingMessages:;
- (id)readingMessages;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)sharedInstance;
@end
