@interface TTVideoEngineStorageItem : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSData value;
@property (nonatomic) NSInteger size;
@property (nonatomic) NSInteger modTime;
@property (nonatomic) NSInteger accessTime;
- (id)key;
- (void)setAccessTime:;
- (int)accessTime;
- (void)setKey:;
- (void)setModTime:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (int)modTime;
- (void)setSize:;
- (int)size;
@end
