@interface WFOnScreenContentService : NSObject
- (void)getOnScreenContentWithOptions:completionHandler:;
- (void)getOnScreenContentWithOptions:completion:;
+ (id)sharedService;
@end
