@interface AWEStudioRepoFriendsModel : NSObject
@property (nonatomic) BOOL isSlideRightEnterRecord;
@property (nonatomic) BOOL isPullDownEnterRecord;
@property (nonatomic) NSString cfNoticeID;
@property (nonatomic) NSString schoolID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schoolID;
- (id)acc_publishRequestParams:;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (void)setSchoolID:;
- (id)acc_referExtraParams;
- (id)acc_publishTrackEventParams:;
- (void)setIsSlideRightEnterRecord:;
- (void)setIsPullDownEnterRecord:;
- (BOOL)isSlideRightEnterRecord;
- (BOOL)isPullDownEnterRecord;
- (id)cfNoticeID;
- (void)setCfNoticeID:;
- (id)oldSchoolIDWithExtraData:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
