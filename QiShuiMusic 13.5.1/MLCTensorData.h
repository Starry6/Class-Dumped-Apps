@interface MLCTensorData : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) ^v bytes;
@property (nonatomic) Q length;
- (id)data;
- (id)bytes;
- (void).cxx_destruct;
- (void)setData:;
- (unsigned long long)length;
- (id)initWithDataNoCopy:length:freeWhenDone:;
- (id)initWithDataNoCopy:length:deallocator:;
- (id)initWithData:length:;
+ (id)dataWithBytesNoCopy:length:freeWhenDone:;
+ (id)dataWithBytes:length:;
+ (id)dataWithBytesNoCopy:length:;
+ (id)dataWithImmutableBytesNoCopy:length:;
+ (id)dataWithBytesNoCopy:length:deallocator:;
@end
