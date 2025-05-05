@interface YYKVStorageItem : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSData value;
@property (nonatomic) NSString filename;
@property (nonatomic) NSInteger size;
@property (nonatomic) NSInteger modTime;
@property (nonatomic) NSInteger accessTime;
@property (nonatomic) NSData extendedData;
- (id)filename;
- (id)extendedData;
- (id)key;
- (void)setAccessTime:;
- (void)setFilename:;
- (void)setExtendedData:;
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
