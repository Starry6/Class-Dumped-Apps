@interface UNNotificationTopicRequest : NSObject
@property (nonatomic) Q supportedOptions;
@property (nonatomic) Q enabledOptions;
@property (nonatomic) UNNotificationTopic topic;
@property (nonatomic) Q options;
- (id)_initWithIdentifier:displayName:priority:sortIdentifier:supportedOptions:enabledOptions:;
- (id)_description;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)enabledOptions;
- (id)topic;
- (unsigned long long)supportedOptions;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)topicRequestWithIdentifier:displayName:priority:sortIdentifier:options:;
+ (id)topicRequestWithIdentifier:displayName:priority:sortIdentifier:supportedOptions:enabledOptions:;
+ (id)topicRequestWithIdentifier:displayName:options:;
@end
