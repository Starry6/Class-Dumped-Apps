@interface INWidgetDescriptorManager : NSObject
@property (nonatomic) NSSet widgetDescriptors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)descriptorsDidChangeForDescriptorProvider:;
- (void)setWidgetDescriptors:;
- (id)init;
- (void)dealloc;
- (id)widgetDescriptors;
- (void).cxx_destruct;
- (void)getDescriptorsWithCompletionHandler:;
- (void)getDescriptorForIntent:completionHandler:;
- (void)_startObservingDescriptors;
- (void)_notifyCompletionHandlersWithWidgetDescriptors:;
+ (id)sharedManager;
@end
