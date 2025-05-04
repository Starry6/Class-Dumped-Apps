@interface AWEInviteFriendManager : NSObject
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) NSDictionary socialShareInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)handleContactTappedWithEnterFrom:request:load:;
- (void)handleCommandTappedWithEnterFrom:enterMethod:channelType:;
- (void)handleContactTappedWithEnterFrom:enterMethod:request:load:;
- (void)handleScanTapped:enterMethod:;
- (void)handleQRCodeTappedWithEnterFrom:enterMethod:;
- (void)handleQRCodeTappedWithEnterFrom:;
- (void)handleScanTapped:;
- (void)handleCommandTappedWithEnterFrom:;
- (void)handleRadarTappedWithEnterFrom:;
- (void)setSocialShareInfo:;
- (id)socialShareInfo;
- (void)fetchInviteFriendsTokenWithUser:customItemID:customTargetType:customWebURL:completion:;
- (void)handleCommandTapped;
- (id)cellModelForType:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
