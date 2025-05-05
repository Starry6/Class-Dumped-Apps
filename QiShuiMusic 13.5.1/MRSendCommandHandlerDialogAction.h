@interface MRSendCommandHandlerDialogAction : NSObject
@property (nonatomic) _MRSendCommandResultHandlerDialogActionProtobuf protobuf;
@property (nonatomic) NSString title;
@property (nonatomic) MRSendCommandHandlerEvent event;
@property (nonatomic) q type;
- (id)event;
- (id)initWithProtobuf:;
- (id)protobuf;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithTitle:type:commandEvent:;
+ (id)actionWithTitle:type:commandEvent:;
@end
