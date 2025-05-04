@interface AWEBDPRankDataRequest : NSObject
+ (void)fetchRankDataWithModel:uniqueID:completion:;
+ (void)setRankDataWithModel:uniqueID:completion:;
+ (id)getRequestParamWithUniqueID:type:model:;
+ (id)getQueryWithUniqueID:type:model:;
+ (void)fetchRankDataWithParam:uniqueID:completion:;
+ (void)setRankDataWithParam:uniqueID:completion:;
@end
