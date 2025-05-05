@interface MRSendCommandHandlerDialog : NSObject
@property (nonatomic) _MRSendCommandResultHandlerDialogProtobuf protobuf;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSString localizedMessage;
@property (nonatomic) NSArray actions;
- (void)addAction:;
- (id)initWithProtobuf:;
- (id)protobuf;
- (id)actions;
- (void).cxx_destruct;
- (id)localizedTitle;
- (id)description;
- (void)setLocalizedTitle:;
- (id)copyWithZone:;
- (id)initWithTitle:message:;
- (id)localizedMessage;
- (void)setLocalizedMessage:;
+ (id)dialogWithTitle:message:;
@end
