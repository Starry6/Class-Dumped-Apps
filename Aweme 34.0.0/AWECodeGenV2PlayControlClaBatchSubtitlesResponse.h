@interface AWECodeGenV2PlayControlClaBatchSubtitlesResponse : AWEBaseResponseModel
@property (nonatomic) NSArray claInfosModelArray;
@property (nonatomic) NSArray errReasonsModelArray;
- (id)claInfosModelArray;
- (void)setClaInfosModelArray:;
- (id)errReasonsModelArray;
- (void)setErrReasonsModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
