@interface AWEPublishExceptionManager : NSObject
+ (id)checkerMap;
+ (void)setContext:type:;
+ (void)checkWithType:publishModel:completion:;
+ (void)checkWithType:publishModel:showAlert:trackEvent:uploadThreadInfos:uploadAlog:completion:;
+ (id)getContextWithType:;
+ (void)removeContext:;
@end
