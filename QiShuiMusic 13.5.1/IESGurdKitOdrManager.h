@interface IESGurdKitOdrManager : NSObject
- (void)downloadChannel:completionHandler:;
+ (id)sharedInstance;
@end
