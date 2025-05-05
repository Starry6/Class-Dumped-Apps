@interface MFBufferedDataConsumer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (long long)appendData:;
- (id)data;
- (void)done;
@end
