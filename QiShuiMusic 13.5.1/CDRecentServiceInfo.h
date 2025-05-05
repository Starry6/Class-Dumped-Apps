@interface CDRecentServiceInfo : NSObject
@property (nonatomic) NSDictionary itemizedNonPurgeable;
- (BOOL)isEmpty;
- (void)log;
- (id)initWithCoder:;
- (id)nonPurgeableAmount;
- (void)encodeWithCoder:;
- (id)amountAtUrgency:;
- (BOOL)updateAmount:atUrgency:withTimestamp:nonPurgeableAmount:deductFromCurrentAmount:;
- (void).cxx_destruct;
- (id)initWithAmount:atUrgency:withTimestamp:nonPurgeableAmount:;
- (id)description;
- (void)setItemizedNonPurgeable:;
- (id)serialize;
- (id)itemizedNonPurgeable;
- (void)invalidate;
- (BOOL)validate:atUrgency:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)CDRecentServiceInfo:atUrgency:withTimestamp:nonPurgeableAmount:;
@end
