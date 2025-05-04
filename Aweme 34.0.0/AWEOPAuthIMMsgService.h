@interface AWEOPAuthIMMsgService : NSObject
+ (void)requestInfoWithParams:completion:;
+ (void)requestWhenClickWithParams:completion:;
+ (id)buildRespDictWithCode:errMsg:extraDict:;
@end
