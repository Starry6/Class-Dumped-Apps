@interface MPModelStoreAsset : MPModelObject
@property (nonatomic) q endpointType;
@property (nonatomic) NSString redownloadParameters;
@property (nonatomic) BOOL redownloadable;
@property (nonatomic) Q accountIdentifier;
@property (nonatomic) BOOL shouldReportPlayEvents;
@property (nonatomic) BOOL subscriptionRequired;
@property (nonatomic) BOOL needsUserUpload;
+ (id)allSupportedProperties;
+ (id)__subscriptionRequired_KEY;
+ (id)__endpointType_KEY;
+ (id)__redownloadParameters_KEY;
+ (id)__redownloadable_KEY;
+ (id)__accountIdentifier_KEY;
+ (id)__shouldReportPlayEvents_KEY;
+ (id)__needsUserUpload_KEY;
@end
