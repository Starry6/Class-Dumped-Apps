@interface CKContextItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString topicId;
- (void)setTopicId:;
- (void)setTitle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)topicId;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
