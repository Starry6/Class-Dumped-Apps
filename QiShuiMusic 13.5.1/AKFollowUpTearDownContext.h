@interface AKFollowUpTearDownContext : NSObject
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) NSString akAction;
@property (nonatomic) NSString altDSID;
@property (nonatomic) NSString txnid;
@property (nonatomic) NSString idmsData;
@property (nonatomic) BOOL isContinuityPush;
- (void)setItemIdentifier:;
- (id)itemIdentifier;
- (void)setAltDSID:;
- (id)altDSID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)idmsData;
- (void)setIdmsData:;
- (id)akAction;
- (void)setAkAction:;
- (id)txnid;
- (void)setTxnid:;
- (BOOL)isContinuityPush;
- (void)setIsContinuityPush:;
+ (BOOL)supportsSecureCoding;
@end
