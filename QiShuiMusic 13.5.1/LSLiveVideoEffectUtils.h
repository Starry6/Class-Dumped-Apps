@interface LSLiveVideoEffectUtils : NSObject
@property (nonatomic) NSMutableArray listeners;
- (id)getListeners;
- (void)sendMessageToListenersWithType:arg1:arg2:arg3:user_data:;
- (void)removeListener:;
- (void)setListeners:;
- (void)addListener:;
- (id)init;
- (id)listeners;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)getSingleInstance;
@end
