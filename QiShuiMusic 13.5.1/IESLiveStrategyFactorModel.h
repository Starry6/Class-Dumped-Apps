@interface IESLiveStrategyFactorModel : NSObject
@property (nonatomic) NSString stategySubId;
@property (nonatomic) Q infoType;
@property (nonatomic) NSString faName;
@property (nonatomic) NSString faType;
@property (nonatomic) @ faValue;
@property (nonatomic) NSString detailItemId;
@property (nonatomic) q priority;
- (id)faValue;
- (id)detailItemId;
- (id)faName;
- (id)faType;
- (id)faValueDescription;
- (BOOL)factorValueIsEqual:;
- (id)localMapValue;
- (void)setDetailItemId:;
- (void)setFaName:;
- (void)setFaType:;
- (void)setFaValue:;
- (void)setStategySubId:;
- (id)stategySubId;
- (void)setPriority:;
- (unsigned long long)hash;
- (void)setInfoType:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (long long)priority;
- (unsigned long long)infoType;
@end
