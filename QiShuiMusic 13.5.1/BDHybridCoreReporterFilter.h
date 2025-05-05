@interface BDHybridCoreReporterFilter : NSObject
@property (nonatomic) NSString aid;
@property (nonatomic) NSArray serviceList;
@property (nonatomic) BOOL clearAllServiceWithAid;
- (BOOL)isAimedService:;
- (BOOL)canFilterWithDic:forService:;
- (BOOL)clearAllServiceWithAid;
- (BOOL)isAimedAid:;
- (void)setClearAllServiceWithAid:;
- (void).cxx_destruct;
- (void)setAid:;
- (id)aid;
- (id)serviceList;
- (void)setServiceList:;
@end
