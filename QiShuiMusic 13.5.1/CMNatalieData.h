@interface CMNatalieData : CMLogItem
@property (nonatomic) q recordId;
@property (nonatomic) NSUUID sourceId;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSNumber mets;
@property (nonatomic) NSNumber natalies;
@property (nonatomic) NSNumber basalNatalies;
@property (nonatomic) q activityType;
- (long long)activityType;
- (id)startDate;
- (void)dealloc;
- (long long)recordId;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)sourceId;
- (id)copyWithZone:;
- (id)initWithStartDate:recordId:activityType:mets:natalies:basalNatalies:sourceId:;
- (id)mets;
- (id)natalies;
- (id)basalNatalies;
+ (BOOL)supportsSecureCoding;
+ (id)maxNatalieEntries;
@end
