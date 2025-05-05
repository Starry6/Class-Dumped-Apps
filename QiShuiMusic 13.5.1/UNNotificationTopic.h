@interface UNNotificationTopic : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) Q priority;
@property (nonatomic) NSString sortIdentifier;
- (id)_description;
- (id)identifier;
- (id)sortIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_initWithIdentifier:displayName:priority:sortIdentifier:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)priority;
+ (BOOL)supportsSecureCoding;
+ (id)topicWithIdentifier:displayName:priority:sortIdentifier:;
@end
