@interface CNXPCDataMapperProgressiveHandler : NSObject
- (void).cxx_destruct;
- (void)receiveProgressiveContacts:matchInfos:;
- (void)completedWithError:;
- (id)initWithProgressBlock:completionBlock:;
@end
