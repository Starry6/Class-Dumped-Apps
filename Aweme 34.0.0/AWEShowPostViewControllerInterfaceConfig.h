@interface AWEShowPostViewControllerInterfaceConfig : NSObject
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) q initialIndex;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) @ contextProvider;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary logExtraDict;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setReferString:;
- (id)logExtraDict;
- (id)awemeList;
- (id)minCursor;
- (void)setAwemeList:;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)contextProvider;
- (void)setContextProvider:;
- (long long)initialIndex;
- (void)setInitialIndex:;
@end
