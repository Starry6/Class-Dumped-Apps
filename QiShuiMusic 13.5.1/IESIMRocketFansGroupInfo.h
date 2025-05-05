@interface IESIMRocketFansGroupInfo : IESIMBaseApiModel
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString token;
@property (nonatomic) NSString downloadURL;
- (id)scheme;
- (id)token;
- (id)initWithDict:;
- (id)downloadURL;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
