@interface AWEInTodaySchemaMemoriesInfo : MTLModel
@property (nonatomic) q type;
@property (nonatomic) q version;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)version;
- (long long)type;
- (void)setVersion:;
- (void)setType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
