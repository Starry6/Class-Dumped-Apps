@interface MRIDSCompanionMessage : NSObject
@property (nonatomic) NSNumber messageID;
@property (nonatomic) NSData data;
- (id)messageID;
- (id)data;
- (void).cxx_destruct;
- (id)initWithID:data:;
- (BOOL)replyWithData:priority:;
@end
