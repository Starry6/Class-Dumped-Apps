@interface AWEIMEmoticonInfoAnimateIconModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString url;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUrl:;
- (void)setStartTime:;
- (long long)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (long long)startTime;
- (id)url;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
