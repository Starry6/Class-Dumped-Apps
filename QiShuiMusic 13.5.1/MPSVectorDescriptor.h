@interface MPSVectorDescriptor : NSObject
@property (nonatomic) Q length;
@property (nonatomic) Q vectors;
@property (nonatomic) I dataType;
@property (nonatomic) Q vectorBytes;
- (void)setDataType:;
- (id)init;
- (unsigned int)dataType;
- (unsigned long long)length;
- (void)setLength:;
- (unsigned long long)vectorBytes;
- (unsigned long long)vectors;
+ (id)vectorDescriptorWithLength:vectors:vectorBytes:dataType:;
+ (id)vectorDescriptorWithLength:dataType:;
+ (unsigned long long)vectorBytesForLength:dataType:;
@end
