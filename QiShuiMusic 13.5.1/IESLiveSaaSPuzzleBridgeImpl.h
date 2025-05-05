@interface IESLiveSaaSPuzzleBridgeImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callOpenWithParamModel:context:completionHandler:;
- (void)callReportAppLogWithParamModel:context:completionHandler:;
- (void)callShowToastWithParamModel:context:completionHandler:;
- (id)closeContainer:keepOffline:animate:willClose:completion:;
- (id)roomServiceForContext:;
@end
