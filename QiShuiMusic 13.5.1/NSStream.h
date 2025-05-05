@interface NSStream : NSObject
@property (nonatomic) <NSStreamDelegate> delegate;
@property (nonatomic) Q streamStatus;
@property (nonatomic) NSError streamError;
- (id)init;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:forMode:;
- (void)open;
- (void)setDelegate:;
- (id)streamError;
- (void)scheduleInRunLoop:forMode:;
- (void)close;
- (BOOL)setProperty:forKey:;
- (id)propertyForKey:;
- (id)delegate;
+ (void)getStreamsToHostWithName:port:inputStream:outputStream:;
+ (void)getStreamsToHost:port:inputStream:outputStream:;
+ (void)getBoundStreamsWithBufferSize:inputStream:outputStream:;
@end
