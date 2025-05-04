@interface AWEIMGroupParticipantBizInfoNetwork : NSObject
+ (void)updateGroupParticipantForFansClubWithCid:since:completion:;
+ (void)updateAllGroupParticipantInfoWithCid:bizInfoRequestOptions:cursor:repeatCount:completion:;
+ (void)updateGroupParticipantSecUids:bizInfoRequestOptions:cid:completion:;
@end
