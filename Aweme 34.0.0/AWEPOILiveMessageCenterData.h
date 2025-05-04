@interface AWEPOILiveMessageCenterData : NSObject
@property (nonatomic) NSString dataName;
@property (nonatomic) NSObject data;
@property (nonatomic) BOOL isAppLifeCycle;
@property (nonatomic) NSMutableArray subscribers;
- (void)setDataName:;
- (BOOL)isAppLifeCycle;
- (void)setIsAppLifeCycle:;
- (id)init;
- (void)removeListener:;
- (void)addListener:;
- (id)subscribers;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)dataName;
- (void)setSubscribers:;
@end
