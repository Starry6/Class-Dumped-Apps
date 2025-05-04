@interface AWEECOMIMFoldGroupConfig : NSObject
@property (nonatomic) NSDictionary originDict;
@property (nonatomic) double foldBeginTime;
@property (nonatomic) q foldMaxPullTime;
@property (nonatomic) BOOL foldDisable;
- (void)setOriginDict:;
- (id)originDict;
- (BOOL)foldDisable;
- (double)foldBeginTime;
- (void)setFoldBeginTime:;
- (void)setFoldMaxPullTime:;
- (void)setFoldDisable:;
- (long long)foldMaxPullTime;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
