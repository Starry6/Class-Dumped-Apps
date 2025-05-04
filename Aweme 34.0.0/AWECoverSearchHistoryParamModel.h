@interface AWECoverSearchHistoryParamModel : IESLiveBridgeModel
@property (nonatomic) NSArray includeTypeList;
@property (nonatomic) NSArray excludeTypeList;
@property (nonatomic) NSNumber maxNumber;
@property (nonatomic) NSNumber responseHistoryType;
@property (nonatomic) NSArray addWords;
- (id)includeTypeList;
- (void)setIncludeTypeList:;
- (id)excludeTypeList;
- (void)setExcludeTypeList:;
- (id)responseHistoryType;
- (void)setResponseHistoryType:;
- (id)addWords;
- (void)setAddWords:;
- (void).cxx_destruct;
- (id)maxNumber;
- (void)setMaxNumber:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
