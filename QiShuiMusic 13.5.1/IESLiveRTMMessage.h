@interface IESLiveRTMMessage : IESLivePBBaseMessage
@property (nonatomic) IESLiveRTMMessage_Header header;
@property (nonatomic) BOOL hasHeader;
@property (nonatomic) NSData payload;
+ (id)descriptor;
@end
