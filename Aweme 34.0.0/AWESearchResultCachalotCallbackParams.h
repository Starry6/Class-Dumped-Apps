@interface AWESearchResultCachalotCallbackParams : NSObject
@property (nonatomic) BOOL requestSuccess;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) AWESearchCachalotLoginModel loginModel;
@property (nonatomic) AWESearchCachalotFrequencyModel frequencyModel;
@property (nonatomic) AWESearchCachalotHarmfulModel harmfulModel;
@property (nonatomic) BOOL isCancel;
- (void)setLoginModel:;
- (id)loginModel;
- (BOOL)requestSuccess;
- (void)setRequestSuccess:;
- (void)setFrequencyModel:;
- (void)setHarmfulModel:;
- (id)frequencyModel;
- (id)harmfulModel;
- (void)setIsEmpty:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isCancel;
- (void)setIsCancel:;
@end
