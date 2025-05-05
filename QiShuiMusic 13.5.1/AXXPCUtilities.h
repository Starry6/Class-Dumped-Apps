@interface AXXPCUtilities : NSObject
+ (id)dictionaryFromXPCMessage:error:;
+ (id)copyXPCMessageFromDictionary:inReplyToXPCMessage:error:;
@end
