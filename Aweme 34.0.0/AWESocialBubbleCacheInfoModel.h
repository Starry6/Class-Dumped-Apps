@interface AWESocialBubbleCacheInfoModel : NSObject
@property (nonatomic) q hasShowedTotalCount;
@property (nonatomic) NSMutableArray showedDateRecords;
@property (nonatomic) NSMutableDictionary showedNumberInfo;
- (void)setHasShowedTotalCount:;
- (void)setShowedDateRecords:;
- (void)setShowedNumberInfo:;
- (long long)hasShowedTotalCount;
- (id)showedDateRecords;
- (id)showedNumberInfo;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
