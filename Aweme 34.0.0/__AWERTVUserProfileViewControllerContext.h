@interface __AWERTVUserProfileViewControllerContext : NSObject
@property (nonatomic) NSString roomID;
@property (nonatomic) BOOL disableEnterProfilePage;
@property (nonatomic) BOOL showStatisticInfo;
@property (nonatomic) BOOL showVerificationInfo;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterMethod;
- (id)enterFrom;
- (id)initWithDisableEnterProfilePage:showStatisticInfo:andVerification:;
- (BOOL)disableEnterProfilePage;
- (BOOL)showStatisticInfo;
- (BOOL)showVerificationInfo;
- (id)initWithDisableEnterProfilePage:;
- (void)setDisableEnterProfilePage:;
- (void)setShowStatisticInfo:;
- (void)setShowVerificationInfo:;
- (id)roomID;
- (void).cxx_destruct;
- (void)setRoomID:;
@end
