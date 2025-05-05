@interface MTKTextureIOBufferAllocator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)newBufferWithBytesNoCopy:length:deallocNotification:error:;
- (id)newBufferWithLength:;
- (void).cxx_destruct;
- (id)initWithDevice:;
@end
