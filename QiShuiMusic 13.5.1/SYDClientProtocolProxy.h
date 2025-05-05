@interface SYDClientProtocolProxy : NSObject
@property (nonatomic) <SYDClientProtocol> target;
- (id)initWithTarget:;
- (void)setTarget:;
- (void).cxx_destruct;
- (void)storeDidChangeWithStoreID:changeDictionary:reply:;
- (id)target;
@end
