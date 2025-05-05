@interface IESMediaFilterInfo : NSObject
@property (nonatomic) NSString resourcePath;
@property (nonatomic) q filterType;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} effectRange;
@property (nonatomic) IESMMVideoTransformInfo transFormInfo;
@property (nonatomic) BOOL isOverlap;
@property (nonatomic) double duration;
@property (nonatomic) double overlapDuration;
- (double)overlapDuration;
- (id)initWithResourcePath:isOverlap:;
- (id)initWithDict:fileFolder:;
- (BOOL)isOverlap;
- (void)setIsOverlap:;
- (void)setOverlapDuration:;
- (void)setTransFormInfo:;
- (id)transFormInfo;
- (long long)filterType;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)resourcePath;
- (double)duration;
- (id)initWithType:;
- (id)toDict;
- (id)effectRange;
- (void)setEffectRange:;
@end
