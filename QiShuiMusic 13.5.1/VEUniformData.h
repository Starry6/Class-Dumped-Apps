@interface VEUniformData : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger count;
@property (nonatomic) NSInteger byteSize;
@property (nonatomic) q type;
- (id)initWithFloatArray:length:count:type:name:;
- (id)initWithFloatValue:name:;
- (id)initWithIntArray:length:count:type:name:;
- (id)initWithIntValue:name:;
- (int)intValue;
- (float)floatValue;
- (id)data;
- (id)bytes;
- (long long)type;
- (void).cxx_destruct;
- (void)setData:;
- (id)name;
- (int)count;
- (int)byteSize;
@end
