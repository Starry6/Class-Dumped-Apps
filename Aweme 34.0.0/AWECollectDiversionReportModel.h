@interface AWECollectDiversionReportModel : AWEBaseDataModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSInteger relationTag;
@property (nonatomic) BOOL isMusician;
@property (nonatomic) NSInteger totalCount;
- (void)setRelationTag:;
- (int)relationTag;
- (void)setIsMusician:;
- (BOOL)isMusician;
- (void)setUid:;
- (int)totalCount;
- (id)uid;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
