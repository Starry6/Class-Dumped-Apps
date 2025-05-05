@interface MRTextInputMessage : MRProtocolMessage
@property (nonatomic) Q actionType;
@property (nonatomic) NSString text;
- (unsigned long long)actionType;
- (unsigned long long)type;
- (id)text;
- (id)initWithActionType:text:;
@end
