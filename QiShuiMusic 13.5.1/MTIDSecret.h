@interface MTIDSecret : NSObject
@property (nonatomic) NSString value;
@property (nonatomic) NSDate effectiveDate;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL isSynchronized;
@property (nonatomic) NSString syncStatusCode;
- (id)init;
- (id)debugInfo;
- (void)setExpirationDate:;
- (id)initWithCoder:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)effectiveDate;
- (BOOL)isEqual:;
- (void)setEffectiveDate:;
- (id)initWithValue:effectiveDate:expirationDate:isSynchronize:;
- (BOOL)isSynchronized;
- (void)setIsSynchronized:;
- (id)syncStatusCode;
- (void)setSyncStatusCode:;
+ (BOOL)supportsSecureCoding;
@end
