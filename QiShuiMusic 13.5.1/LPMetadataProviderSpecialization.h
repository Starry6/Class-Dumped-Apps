@interface LPMetadataProviderSpecialization : NSObject
@property (nonatomic) <LPMetadataProviderSpecializationDelegate> delegate;
@property (nonatomic) NSURL URL;
@property (nonatomic) LPMetadataProviderSpecializationContext context;
- (void)cancel;
- (id)context;
- (void)start;
- (void)setDelegate:;
- (id)delegate;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)URL;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForResourceWithContext:;
+ (BOOL)generateSpecializedMetadataForCompleteMetadata:withContext:completionHandler:;
+ (id)specializedMetadataProviderForURLWithContext:;
+ (id)specializedMetadataProviderForMetadata:withContext:;
@end
