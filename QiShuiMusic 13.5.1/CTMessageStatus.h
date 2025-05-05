@interface CTMessageStatus : NSObject
@property (nonatomic) I messageId;
@property (nonatomic) NSInteger messageType;
@property (nonatomic) NSInteger result;
- (int)result;
- (int)messageType;
- (unsigned int)messageId;
- (id)initWithMessageId:messageType:result:;
@end
