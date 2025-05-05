@interface MFPartialNetworkDataConsumer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)purge;
- (id)init;
- (void)dealloc;
- (long long)appendData:;
- (id)data;
- (unsigned long long)length;
- (void)done;
- (id)copyDataWithUnixLineEndings;
@end
