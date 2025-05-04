@interface AWETeenVideoBridgeHandler : NSObject
@property (nonatomic) NSMutableDictionary dataLists;
@property (nonatomic) NSString currentReactID;
@property (nonatomic) NSMutableDictionary callbacks;
- (void)p_addNotifications;
- (void)setDataLists:;
- (id)dataLists;
- (id)currentReactID;
- (void)setCurrentReactID:;
- (void)p_lynxDealloc:;
- (void)p_clearDataListWithId:;
- (id)init;
- (void)dealloc;
- (id)callbacks;
- (void)setCallbacks:;
- (void).cxx_destruct;
+ (void)handleOpenAwemeDetailWithParams:;
+ (void)handleLoadDetailFeedsWithParams:;
+ (void)publishEventVideoStateChangeWithParams:;
+ (id)sharedHandler;
@end
