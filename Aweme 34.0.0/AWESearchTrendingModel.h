@interface AWESearchTrendingModel : AWEBaseApiModel
@property (nonatomic) NSString activeTime;
@property (nonatomic) Q type;
@property (nonatomic) NSString editionID;
@property (nonatomic) BOOL isValentinesDay;
@property (nonatomic) NSString starID;
- (id)editionID;
- (void)setEditionID:;
- (BOOL)isValentinesDay;
- (void)setIsValentinesDay:;
- (id)starID;
- (void)setStarID:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)activeTime;
- (void)setActiveTime:;
@end
