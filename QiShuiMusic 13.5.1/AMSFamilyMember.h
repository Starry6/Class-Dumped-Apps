@interface AMSFamilyMember : NSObject
@property (nonatomic) BOOL currentSignedInUser;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) BOOL askToBuyEnabled;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSNumber iCloudDSID;
@property (nonatomic) NSString iCloudUsername;
@property (nonatomic) NSNumber iTunesDSID;
@property (nonatomic) NSString iTunesUsername;
@property (nonatomic) NSString lastName;
@property (nonatomic) BOOL sharingPurchases;
- (id)firstName;
- (id)iCloudDSID;
- (id)lastName;
- (id)initWithDictionaryRepresentation:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isAskToBuyEnabled;
- (BOOL)isCurrentSignedInUser;
- (void)setCurrentSignedInUser:;
- (id)iCloudUsername;
- (id)iTunesDSID;
- (id)iTunesUsername;
- (BOOL)isSharingPurchases;
@end
