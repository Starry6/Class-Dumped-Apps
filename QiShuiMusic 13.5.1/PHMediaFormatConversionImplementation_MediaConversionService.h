@interface PHMediaFormatConversionImplementation_MediaConversionService : NSObject
@property (nonatomic) PAVideoConversionServiceClient videoConversionServiceClient;
@property (nonatomic) PAImageConversionServiceClient imageConversionServiceClient;
@property (nonatomic) q transferBehaviorUserPreference;
@property (nonatomic) NSSet ut_objectsToBeDeallocatedWithReceiver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)videoConversionServiceClient;
- (id)imageConversionServiceClient;
- (void).cxx_destruct;
- (void)setImageConversionServiceClient:;
- (void)setVideoConversionServiceClient:;
- (long long)transferBehaviorUserPreference;
- (id)ut_objectsToBeDeallocatedWithReceiver;
- (void)performConversionRequest:completionHandler:;
- (void)performVideoConversionRequest:completionHandler:;
- (id)submitNonSinglePassVideoConversionRequest:destination:completionHandler:;
- (id)submitSinglePassVideoConversionRequest:destination:completionHandler:;
- (void)applyCommonOptionsFromVideoRequest:toOptions:;
- (void)performImageConversionRequest:completionHandler:;
- (void)applyCommonOptionsFromRequest:toOptions:;
@end
