@interface IESLiveChargeWebviewInterceptor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)JSONToDictionary:;
- (id)dictionaryToJson:;
- (BOOL)webview:canHandleURL:;
- (id)webview:handleURL:;
+ (id)sharedInstance;
@end
