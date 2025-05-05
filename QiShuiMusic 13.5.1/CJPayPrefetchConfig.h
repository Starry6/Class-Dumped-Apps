@interface CJPayPrefetchConfig : JSONModel
@property (nonatomic) NSArray<CJPayPrefetchRequestModel> prefetchDatas;
- (id)getRequestModelByUrl:;
- (id)prefetchDatas;
- (void)setPrefetchDatas:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
