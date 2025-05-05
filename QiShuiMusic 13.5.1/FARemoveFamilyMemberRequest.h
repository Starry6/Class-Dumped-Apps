@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest
@property (nonatomic) NSNumber memberDSID;
- (void)startRequestWithCompletionHandler:;
- (void).cxx_destruct;
- (id)initWithFamilyMemberDSID:;
- (id)memberDSID;
@end
