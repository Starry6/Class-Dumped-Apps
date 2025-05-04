@interface AWEIMUserRelationService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isFilteredByRelationOfUser:;
- (void)isFilteredByRelationOrBizAccountOfUserID:completion:;
- (void)isBizAccountOfUserID:completion:;
- (long long)relationChatTypeOfUser:;
@end
