@interface AWEIMFansGroupNetwork : NSObject
+ (void)applyJoinFansGroupWithCid:completion:;
+ (void)fetchGuestFansGroupInfoWithSecUid:completion:;
+ (void)fetchMasterFansGroupInfoWithCursor:completion:;
+ (void)fetchProfileExportCardInfoWithCompletion:;
+ (void)updateMyExportFansGroupWithCids:source:completion:;
@end
