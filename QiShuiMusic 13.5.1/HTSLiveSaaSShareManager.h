@interface HTSLiveSaaSShareManager : NSObject
@property (nonatomic) NSMutableArray roomidArray;
- (BOOL)isSharedButtonClickedForRoomid:;
- (void)setRoomidArray:;
- (id)lastShareTypeInLive;
- (id)roomidArray;
- (void)setLastShareTypeInLive:;
- (void)setSharedButtonClickedForRoomid:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
