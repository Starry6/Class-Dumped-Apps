@interface MTKTextureIOBuffer : NSObject
@property (nonatomic) <MTLBuffer> buffer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buffer;
- (void).cxx_destruct;
- (id)map;
- (id)copyWithZone:;
- (id)initWithLength:device:;
- (id)initWithBytesNoCopy:length:deallocNotification:device:error:;
@end
