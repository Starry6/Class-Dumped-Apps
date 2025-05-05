@interface MTLCaptureDescriptor : NSObject
@property (nonatomic) @ captureObject;
@property (nonatomic) q destination;
@property (nonatomic) NSURL outputURL;
- (void)setDestination:;
- (id)init;
- (void)dealloc;
- (long long)destination;
- (unsigned long long)hash;
- (void)setOutputURL:;
- (id)outputURL;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)captureObject;
- (void)setCaptureObject:;
@end
