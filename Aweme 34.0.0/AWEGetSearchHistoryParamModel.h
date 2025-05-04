@interface AWEGetSearchHistoryParamModel : IESLiveBridgeModel
@property (nonatomic) NSArray includeTypeList;
@property (nonatomic) NSArray excludeTypeList;
@property (nonatomic) NSNumber maxNumber;
@property (nonatomic) NSNumber responseHistoryType;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString searchStyle;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setSearchStyle:;
- (id)searchStyle;
- (id)includeTypeList;
- (void)setIncludeTypeList:;
- (id)excludeTypeList;
- (void)setExcludeTypeList:;
- (id)responseHistoryType;
- (void)setResponseHistoryType:;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
- (id)maxNumber;
- (void)setMaxNumber:;
+ (id)modelCustomPropertyMapper;
@end
