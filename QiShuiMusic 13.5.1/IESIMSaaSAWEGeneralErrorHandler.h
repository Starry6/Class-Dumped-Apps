@interface IESIMSaaSAWEGeneralErrorHandler : NSObject
- (BOOL)handleError:fromViewController:;
- (BOOL)handleError:fromView:;
- (BOOL)handleError:fromViewController:view:;
+ (id)defaultHandler;
@end
