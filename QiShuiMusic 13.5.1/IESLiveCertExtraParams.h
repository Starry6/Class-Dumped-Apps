@interface IESLiveCertExtraParams : NSObject
@property (nonatomic) UIViewController fromViewController;
@property (nonatomic) BOOL forcePresent;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (BOOL)forcePresent;
- (void)setForcePresent:;
- (void)setFromViewController:;
- (id)fromViewController;
- (void).cxx_destruct;
@end
