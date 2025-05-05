@interface WBSDKJSONDecoder : NSObject
- (id)initWithParseOptions:;
- (id)mutableObjectWithUTF8String:length:;
- (id)mutableObjectWithUTF8String:length:error:;
- (id)objectWithUTF8String:length:;
- (id)objectWithUTF8String:length:error:;
- (id)parseUTF8String:length:error:;
- (id)parseWBSDKJSONData:;
- (id)parseWBSDKJSONData:error:;
- (void)clearCache;
- (id)init;
- (void)dealloc;
- (id)mutableObjectWithData:error:;
- (id)mutableObjectWithData:;
- (id)objectWithData:error:;
- (id)objectWithData:;
- (id)parseUTF8String:length:;
+ (id)decoderWithParseOptions:;
+ (id)decoder;
@end
