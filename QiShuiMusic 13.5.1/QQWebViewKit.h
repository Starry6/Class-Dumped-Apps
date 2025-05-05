@interface QQWebViewKit : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)JSONValue:;
+ (BOOL)canHanleOpenUrlFromSafari:;
+ (id)dictionaryByParseUrlFromSeparator:separator:;
+ (id)messageWithSafariUrl:;
@end
