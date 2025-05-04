@interface AWEListenFeedAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)listenFeedPageTitleString;
- (id)listenFeedTextString;
- (id)weakTarget;
+ (Class)weakTargetClass;
+ (id)listenFeedTargetReferStrings;
+ (Class)dataControllerClassWithReferString:hasExternalDataController:;
@end
