@interface CKResourceNetFetcher : NSObject
+ (id)getApi:urlPath:;
+ (void)fetchGenericTemplateByRequestModel:completion:;
+ (void)fetchGenericTemplateDetail:completion:;
@end
