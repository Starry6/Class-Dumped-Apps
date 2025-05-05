@interface MRGenericMessage : MRProtocolMessage
@property (nonatomic) NSString key;
@property (nonatomic) NSData data;
- (id)data;
- (id)key;
- (unsigned long long)type;
- (id)initWithKey:data:;
@end
