@interface SAMICore_ServerEvent : NSObject
@property (nonatomic) NSString event;
@property (nonatomic) NSInteger statusCode;
@property (nonatomic) NSString statusText;
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString messageId;
@property (nonatomic) NSString textMsg;
@property (nonatomic) NSData binaryData;
@property (nonatomic) NSInteger binaryDateLen;
- (id)textMsg;
- (int)binaryDateLen;
- (void)setBinaryData:;
- (void)setBinaryDateLen:;
- (void)setTextMsg:;
- (void)setStatusCode:;
- (void)setEvent:;
- (int)statusCode;
- (void)dealloc;
- (id)statusText;
- (id)event;
- (id)messageId;
- (id)taskId;
- (id)binaryData;
- (void)setMessageId:;
- (void)setTaskId:;
- (void)setStatusText:;
@end
