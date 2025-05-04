@interface AWEBootBizSignalConfig : NSObject
@property (nonatomic) NSDictionary signalMap;
@property (nonatomic) Q currentCondition;
- (void)setupWithConfig:;
- (void)setCurrentCondition:;
- (unsigned long long)currentCondition;
- (void)postSignalIfNeeded;
- (void)setSignalMap:;
- (id)signalMap;
- (void)updateCondition:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
