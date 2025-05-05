@interface MPSVector : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) Q length;
@property (nonatomic) Q vectors;
@property (nonatomic) I dataType;
@property (nonatomic) Q vectorBytes;
@property (nonatomic) Q offset;
@property (nonatomic) <MTLBuffer> data;
- (id)init;
- (id)data;
- (unsigned int)dataType;
- (id)initWithDevice:descriptor:;
- (unsigned long long)offset;
- (unsigned long long)resourceSize;
- (void)synchronizeOnCommandBuffer:;
- (void).cxx_destruct;
- (unsigned long long)length;
- (id).cxx_construct;
- (id)device;
- (unsigned long long)vectorBytes;
- (unsigned long long)vectors;
- (id)initWithBuffer:descriptor:;
- (id)initWithBuffer:offset:descriptor:;
- (id)initPrivateWithDescriptor:device:;
- (id)initWithBuffer:length:dataType:;
@end
