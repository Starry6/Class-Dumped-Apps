@interface AWEIMFansTagItemModel : MTLModel
@property (nonatomic) q tagType;
@property (nonatomic) NSString tagText;
@property (nonatomic) q priority;
@property (nonatomic) q intValue;
@property (nonatomic) q expireTimeInMs;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTagText:;
- (id)tagText;
- (long long)expireTimeInMs;
- (void)setExpireTimeInMs:;
- (long long)intValue;
- (id)schema;
- (long long)tagType;
- (void)setSchema:;
- (long long)priority;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)setIntValue:;
- (void)setTagType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
