@interface IESIMSearchTrendingModel : IESIMBaseApiModel
@property (nonatomic) NSString activeTime;
@property (nonatomic) Q type;
@property (nonatomic) NSString editionID;
@property (nonatomic) BOOL isValentinesDay;
@property (nonatomic) NSString starID;
- (BOOL)isValentinesDay;
- (id)editionID;
- (void)setEditionID:;
- (void)setIsValentinesDay:;
- (void)setStarID:;
- (id)starID;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)activeTime;
- (void)setActiveTime:;
@end
