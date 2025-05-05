@interface ExportedMessageChannel : NSObject
- (void).cxx_destruct;
- (void)onCallRemoteAU:reply:;
- (id)initWithMessageChannel:;
@end
