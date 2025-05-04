@interface AWEGeneralErrorHandler : NSObject
- (BOOL)handleError:fromView:;
- (BOOL)handleError:fromViewController:;
- (BOOL)handleError:fromViewController:view:;
- (BOOL)handleError:fromViewController:view:;
+ (id)defaultHandler;
@end
