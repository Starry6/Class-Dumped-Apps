@interface NSFilePromiseWriteToken : NSObject
@property (nonatomic) NSURL promiseURL;
@property (nonatomic) NSURL logicalURL;
- (void)dealloc;
- (id)promiseURL;
- (id)logicalURL;
- (void)setPromiseURL:;
- (void)setLogicalURL:;
@end
