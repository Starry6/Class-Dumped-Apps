@interface AWERVListSearchModel : NSObject
@property (nonatomic) NSArray queryList;
@property (nonatomic) AWEAwemeModel currentPlayModel;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL hasTrackedShow;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)currentPlayModel;
- (void)setHasTrackedShow:;
- (BOOL)hasTrackedShow;
- (void)setCurrentPlayModel:;
- (void)setQueryList:;
- (void).cxx_destruct;
- (id)queryList;
@end
