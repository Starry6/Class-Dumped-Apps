@interface AFImageResponseSerializer : AFHTTPResponseSerializer
@property (nonatomic) double imageScale;
@property (nonatomic) BOOL automaticallyInflatesResponseImage;
- (BOOL)automaticallyInflatesResponseImage;
- (id)responseObjectForResponse:data:error:;
- (void)setAutomaticallyInflatesResponseImage:;
- (void)setImageScale:;
- (id)init;
- (double)imageScale;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
@end
