@interface ZXHttpRequest : NSObject
+ (void)postInterface:postData:callBack:;
+ (void)postUrl:postData:callBack:;
+ (void)getInterface:callBack:;
+ (void)getUrl:callBack:;
+ (void)baseInterface:postData:callBack:;
+ (void)baseUrl:postData:callBack:;
+ (id)getJsonStrWithDic:;
@end
