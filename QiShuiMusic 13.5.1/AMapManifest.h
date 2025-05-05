@interface AMapManifest : NSObject
+ (id)actionStringWithAction:;
+ (id)manifestReformerWithAction:type:parameters:product:;
+ (void)performManifestRequestWithAction:opType:parameters:product:completionBlock:;
+ (void)performManifestRequestWithType:product:completionBlock:;
+ (id)resultWithResponseData:;
+ (id)typeStringWithType:;
@end
