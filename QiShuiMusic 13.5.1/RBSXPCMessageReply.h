@interface RBSXPCMessageReply : NSObject
@property (nonatomic) <RBSXPCEncoding><RBSXPCDecoding> payload;
- (id)payload;
- (void)send;
- (void).cxx_destruct;
- (void)prepareForHandoff;
@end
