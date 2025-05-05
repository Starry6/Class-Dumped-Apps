@interface IESLiveInteractiveAPI : HTSLiveApi
- (id)apiRequestByPath:callback:;
- (void)syncDegradeRequest:roomID:completion:;
- (void)turnOnWithParams:completion:;
- (void)turnOnWithParamsDict:completion:;
@end
