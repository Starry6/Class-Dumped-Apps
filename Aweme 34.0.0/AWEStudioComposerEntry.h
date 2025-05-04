@interface AWEStudioComposerEntry : NSObject
- (id)aAWEStudioComposerAdapter;
- (id)decorateComposerInput:;
+ (id)baseTaskClasses;
+ (id)startWithDataConfig:cameraCustomization:purpose:silentPublishApi:beforeTaskInject:completion:exitAction:;
+ (void)showErrorToastWithError:;
+ (void)fix:;
+ (id)saveDraftTaskClasses;
+ (id)silentPublishTaskClasses;
+ (id)modernTaskClasses;
+ (id)deprecated_taskClasses;
+ (Class)aAWEStudioComposerAdapterClass;
+ (id)createPublishModelWithApiModel:cameraCustomization:purpose:silentPublishApi:beforeTaskInject:completion:exitAction:;
+ (id)shared;
@end
