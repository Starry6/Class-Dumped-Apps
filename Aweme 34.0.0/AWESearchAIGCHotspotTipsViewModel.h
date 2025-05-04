@interface AWESearchAIGCHotspotTipsViewModel : NSObject
@property (nonatomic) NSString mode;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray cellModelList;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) BOOL isLast;
- (void)setLogExtra:;
- (id)logExtra;
- (void)setIsLast:;
- (id)cellModelList;
- (void)setCellModelList:;
- (id)initWithParams:;
- (void)setMode:;
- (id)mode;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (BOOL)isLast;
@end
