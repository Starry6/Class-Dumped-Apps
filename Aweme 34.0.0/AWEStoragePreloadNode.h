@interface AWEStoragePreloadNode : NSObject
@property (nonatomic) AWEStorage storage;
@property (nonatomic) NSString key;
@property (nonatomic) NSString valueClass;
- (id)initWithStorage:key:valueClass:;
- (id)valueClass;
- (void)setStorage:;
- (id)storage;
- (void)setKey:;
- (id)key;
- (void)setValueClass:;
- (void).cxx_destruct;
@end
