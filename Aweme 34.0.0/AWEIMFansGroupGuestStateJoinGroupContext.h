@interface AWEIMFansGroupGuestStateJoinGroupContext : NSObject
@property (nonatomic) AWEIMFansGroupGuestItemViewModel vm;
@property (nonatomic) q sourceType;
@property (nonatomic) NSDictionary invitationExtra;
@property (nonatomic) NSDictionary bizExtra;
- (id)bizExtra;
- (void)setBizExtra:;
- (id)invitationExtra;
- (id)vm;
- (void)setVm:;
- (void)setInvitationExtra:;
- (void)setSourceType:;
- (long long)sourceType;
- (void).cxx_destruct;
@end
