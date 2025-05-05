@interface PPNotification : NSObject
@property (nonatomic) NSString bundleId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString message;
@property (nonatomic) NSDate date;
- (id)init;
- (id)initWithCurrentDateAndBundleId:title:subtitle:message:;
- (id)bundleId;
- (id)initWithBundleId:title:subtitle:message:date:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)date;
- (void)encodeWithCoder:;
- (id)title;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (id)subtitle;
- (BOOL)isEqualToNotification:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
