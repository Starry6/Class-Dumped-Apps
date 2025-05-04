@interface AWEUserTrackMonitorConfig : NSObject
@property (nonatomic) NSError tabError;
@property (nonatomic) NSError headerError;
@property (nonatomic) NSString currentPage;
@property (nonatomic) NSString tabLogName;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL isSelf;
@property (nonatomic) NSDictionary ext;
@property (nonatomic) BOOL refresh;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setExt:;
- (void)setTabLogName:;
- (void)setTabError:;
- (void)setHeaderError:;
- (id)tabLogName;
- (id)tabError;
- (id)headerError;
- (BOOL)refresh;
- (void)setRefresh:;
- (id)currentPage;
- (void)setCurrentPage:;
- (void).cxx_destruct;
- (void)setIsSelf:;
- (BOOL)isSelf;
- (id)ext;
@end
