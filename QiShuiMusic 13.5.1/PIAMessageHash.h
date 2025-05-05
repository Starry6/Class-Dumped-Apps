@interface PIAMessageHash : NSObject
@property (nonatomic) NSMutableDictionary dic;
- (id)dic;
- (void)setDic:;
- (id)getObserversArray:;
- (void)registerMessage:forKey:;
- (void)unregisterKeyMessage:;
- (id)init;
- (void).cxx_destruct;
@end
