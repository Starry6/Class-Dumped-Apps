@interface AWEIMConversationAddParticipantsContext : NSObject
@property (nonatomic) q addAsRole;
@property (nonatomic) BOOL silenceToast;
@property (nonatomic) NSNumber sourceType;
- (void)setSilenceToast:;
- (BOOL)silenceToast;
- (long long)addAsRole;
- (void)setAddAsRole:;
- (void)setSourceType:;
- (id)sourceType;
- (void).cxx_destruct;
@end
