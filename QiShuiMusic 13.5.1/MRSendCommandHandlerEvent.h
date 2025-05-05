@interface MRSendCommandHandlerEvent : NSObject
@property (nonatomic) _MRSendCommandMessageProtobuf protobuf;
@property (nonatomic) I command;
@property (nonatomic) NSString commandDescription;
@property (nonatomic) NSDictionary options;
- (id)initWithProtobuf:;
- (id)protobuf;
- (unsigned int)command;
- (id)options;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithCommand:options:;
- (id)commandDescription;
+ (id)eventWithCommand:options:;
@end
