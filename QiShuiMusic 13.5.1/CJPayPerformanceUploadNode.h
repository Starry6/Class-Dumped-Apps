@interface CJPayPerformanceUploadNode : JSONModel
@property (nonatomic) NSString typeStr;
@property (nonatomic) NSString pageName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL need_extra;
- (unsigned long long)curType;
- (BOOL)matchToPerformanceStage:;
- (BOOL)need_extra;
- (void)setNeed_extra:;
- (void)setTypeStr:;
- (void)setName:;
- (id)typeStr;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:;
- (void)setPageName:;
- (id)pageName;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
