@interface AWEMusicStreamingImpl.LunaRequestBaseModel : NSObject
- (BOOL)needJsonResponse;
- (id)fromJsonResponse:;
- (Class)responseModelClass;
- (id)init;
- (id)path;
- (id)method;
- (id)params;
@end
