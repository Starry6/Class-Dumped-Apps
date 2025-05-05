@interface PBMessageStreamReader : NSObject
@property (nonatomic) # classOfNextMessage;
@property (nonatomic) Q position;
- (unsigned long long)position;
- (void).cxx_destruct;
- (id)initWithStream:;
- (id)nextMessage;
- (void)setClassOfNextMessage:;
- (Class)classOfNextMessage;
@end
