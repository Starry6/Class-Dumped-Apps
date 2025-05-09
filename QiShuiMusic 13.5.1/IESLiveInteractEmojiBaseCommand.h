@interface IESLiveInteractEmojiBaseCommand : NSObject
@property (nonatomic) NSMutableDictionary tasks;
@property (nonatomic) IESLiveEmojiDecoderPool decoderPool;
@property (nonatomic) NSString baseDir;
@property (nonatomic) IESLiveInteractionEmojiAdapter adapter;
@property (nonatomic) NSArray users;
@property (nonatomic) NSObject<OS_dispatch_group> groupTask;
@property (nonatomic) IESLiveInteractEmojiBaseCommand pre;
@property (nonatomic) NSMutableDictionary timeOffsets;
- (void)setTimeOffsets:;
- (void)setDecoderPool:;
- (void)batchDispatch:effect:to:;
- (id)decoderPool;
- (void)dispatch:effect:to:;
- (id)groupTask;
- (id)initWithBaseDir:adapter:decoder:;
- (void)setBaseDir:;
- (void)setGroupTask:;
- (id)timeOffsets;
- (id)userTasks:;
- (id)users;
- (void)cancelTask:;
- (id)baseDir;
- (id)adapter;
- (void).cxx_destruct;
- (void)removeAnimation:;
- (id)tasks;
- (void)setTasks:;
- (void)setUsers:;
- (void)setAdapter:;
- (id)pre;
- (void)setPre:;
@end
