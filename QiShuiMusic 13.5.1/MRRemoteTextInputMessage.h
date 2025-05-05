@interface MRRemoteTextInputMessage : MRProtocolMessage
@property (nonatomic) Q version;
@property (nonatomic) NSData data;
- (id)data;
- (unsigned long long)version;
- (unsigned long long)type;
- (id)initWithVersion:data:;
@end
