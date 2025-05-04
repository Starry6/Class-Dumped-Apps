@interface AWEListenFeedAdapterDefault : NSObject
- (id)listenFeedPageTitleString;
- (id)listenFeedTextString;
+ (id)listenFeedTargetReferStrings;
+ (Class)dataControllerClassWithReferString:hasExternalDataController:;
@end
