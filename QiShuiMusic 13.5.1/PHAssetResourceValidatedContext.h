@interface PHAssetResourceValidatedContext : NSObject
@property (nonatomic) PHExternalAssetResource resource;
@property (nonatomic) NSURL validatedURL;
@property (nonatomic) NSData validatedData;
- (void).cxx_destruct;
- (id)resource;
- (id)initWithResource:validatedURL:validatedData:;
- (id)validatedURL;
- (id)validatedData;
@end
