@interface AWEEcomSearchExcuteSearchParamsModel : NSObject
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q tabType;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) BOOL isSearchByUser;
- (void)setEnterMethod:;
- (void)setExtraParams:;
- (id)enterMethod;
- (id)extraParams;
- (unsigned long long)tabType;
- (void)setTabType:;
- (BOOL)isSearchByUser;
- (void)setIsSearchByUser:;
- (void).cxx_destruct;
@end
