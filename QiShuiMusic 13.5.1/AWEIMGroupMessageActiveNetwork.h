@interface AWEIMGroupMessageActiveNetwork : NSObject
+ (void)updateAllGroupParticipantInfoWithCid:cursor:repeatCount:completion:;
+ (void)updateGroupParticipantSecUids:cid:completion:;
@end
