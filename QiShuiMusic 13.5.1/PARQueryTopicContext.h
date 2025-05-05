@interface PARQueryTopicContext : NSObject
@property (nonatomic) SFQueryTopic topic;
@property (nonatomic) NSString contextId;
@property (nonatomic) q index;
- (void)setContextId:;
- (void)setTopic:;
- (id)contextId;
- (id)initWithCoder:;
- (long long)index;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)topic;
- (id)initWithTopic:index:;
+ (BOOL)supportsSecureCoding;
@end
