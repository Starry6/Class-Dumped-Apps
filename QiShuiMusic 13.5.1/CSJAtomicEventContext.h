@interface CSJAtomicEventContext : NSObject
@property (nonatomic) NSMapTable eventParams;
@property (nonatomic) NSObject<OS_dispatch_queue> eventParamsQueue;
- (void)setEventParams:;
- (id)stringValueForkey:defaultValue:;
- (id)arrayValueForKey:defaultValue:;
- (id)dictionaryValueForKey:defaultValue:;
- (id)eventParamsQueue;
- (void)setEventParamsQueue:;
- (id)init;
- (void)setObject:forKey:;
- (void)removeAllObjects;
- (BOOL)boolValueForKey:defaultValue:;
- (void).cxx_destruct;
- (id)objectForKey:defaultValue:;
- (void)removeObjectForKey:;
- (long long)integerValueForKey:defaultValue:;
- (double)doubleValueForKey:defaultValue:;
- (id)eventParams;
@end
