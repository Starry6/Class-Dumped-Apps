@interface CTRemoteBlacklistPlan : CTPlan
@property (nonatomic) NSString key;
@property (nonatomic) NSString blacklistIMEI;
@property (nonatomic) NSString blacklistEID;
@property (nonatomic) NSString blacklistICCID;
@property (nonatomic) NSString uploaderIMEI;
@property (nonatomic) NSString uploaderEID;
- (id)key;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithkey:blacklistIMEI:blacklistEID:blacklistICCID:uploaderIMEI:uploaderEID:;
- (id)blacklistIMEI;
- (id)blacklistEID;
- (id)blacklistICCID;
- (id)uploaderIMEI;
- (id)uploaderEID;
+ (BOOL)supportsSecureCoding;
@end
