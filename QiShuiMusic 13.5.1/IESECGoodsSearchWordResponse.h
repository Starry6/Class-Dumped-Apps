@interface IESECGoodsSearchWordResponse : IESECBaseApiModel
@property (nonatomic) NSArray searchData;
@property (nonatomic) NSString logID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchData;
- (void)setSearchData:;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:;
+ (id)searchDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
