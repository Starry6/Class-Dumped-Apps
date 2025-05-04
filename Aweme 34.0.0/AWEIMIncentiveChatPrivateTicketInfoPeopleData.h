@interface AWEIMIncentiveChatPrivateTicketInfoPeopleData : NSObject
@property (nonatomic) NSString toIdentityID;
@property (nonatomic) NSString convID;
@property (nonatomic) NSString convShortID;
@property (nonatomic) NSNumber relationCycleDay;
- (id)convID;
- (void)setConvShortID:;
- (id)convShortID;
- (void)setConvID:;
- (id)toIdentityID;
- (void)setToIdentityID:;
- (id)relationCycleDay;
- (void)setRelationCycleDay:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
