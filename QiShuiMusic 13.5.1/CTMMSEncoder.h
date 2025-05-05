@interface CTMMSEncoder : NSObject
+ (id)encodeMessage:;
+ (id)decodeSmsFromData:;
+ (id)decodeSmsFromData:data:;
+ (id)encodeSms:;
+ (id)decodeMessageFromData:;
+ (id)decodeMessageFromData:data:;
@end
