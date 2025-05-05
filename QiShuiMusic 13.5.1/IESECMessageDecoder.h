@interface IESECMessageDecoder : NSObject
+ (id)decodeJsonMessage:modelClass:error:;
+ (id)decodeProtobufMessage:error:;
+ (id)p_IESECRecvMessageContentFormatString:;
+ (id)decodeMessage:error:;
@end
