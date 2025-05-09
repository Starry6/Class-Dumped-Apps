@interface ASCViewRender : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)log;
+ (id)subsystem;
+ (id)category;
+ (void)willEmitSignpostOfType:withName:;
+ (id)requiredFieldNames;
+ (void)overlayRequestedWithTag:;
+ (void)modelPrefetchDidBeginWithTag:;
+ (void)modelPrefetchDidEndWithTag:;
+ (void)pageRequestedWithTag:;
+ (void)bootstrapDidBeginWithTag:;
+ (void)bootstrapDidEndWithTag:;
+ (void)launchCorrelationKeyWithTag:withString:;
+ (void)requestDidBeginWithTag:;
+ (void)requestDidEndWithTag:;
+ (void)jsStackBootstrapDidBeginWithTag:;
+ (void)jsStackBootstrapDidEndWithTag:;
+ (void)jsCallDidBeginWithTag:;
+ (void)jsCallDidEndWithTag:;
+ (void)rootViewModelParseDidBeginWithTag:;
+ (void)rootViewModelParseDidEndWithTag:;
+ (void)rootViewModelPresentWithTag:;
+ (void)resourceRequestDidBeginWithTag:;
+ (void)resourceRequestDidEndWithTag:;
+ (void)pageUserReadyWithTag:;
@end
