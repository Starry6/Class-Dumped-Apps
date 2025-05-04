@interface AWEHPTrackQueueManager : NSObject
@property (nonatomic) AWEHPTrackQueue queue;
@property (nonatomic) BOOL enable;
@property (nonatomic) NSArray listenList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithEnable:size:listenList:;
- (void)addTrackEvent:params:;
- (id)listenList;
- (void)setListenList:;
- (BOOL)enable;
- (void)setQueue:;
- (void).cxx_destruct;
- (id)getQueue;
- (id)queue;
- (void)setEnable:;
+ (id)sharedInstance;
@end
