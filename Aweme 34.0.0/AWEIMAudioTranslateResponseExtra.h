@interface AWEIMAudioTranslateResponseExtra : NSObject
@property (nonatomic) NSArray fatalIds;
@property (nonatomic) NSString logID;
@property (nonatomic) double createTime;
- (id)fatalIds;
- (void)setFatalIds:;
- (double)createTime;
- (void)setCreateTime:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)logID;
- (void)setLogID:;
@end
