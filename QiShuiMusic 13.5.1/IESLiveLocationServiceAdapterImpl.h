@interface IESLiveLocationServiceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasSystemPermission;
- (void)requestCurrentCityCodeWithPrivacyCert:callBack:;
@end
