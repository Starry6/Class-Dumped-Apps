@interface AWECacheVideoViewControllerConfig : NSObject
@property (nonatomic) Q listType;
@property (nonatomic) BOOL loadPreviousDisable;
@property (nonatomic) NSString title;
@property (nonatomic) # cellClass;
@property (nonatomic) BOOL selectAllEnable;
@property (nonatomic) {CGPoint=dd} targetContentOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)loadPreviousDisable;
- (void)setLoadPreviousDisable:;
- (BOOL)selectAllEnable;
- (void)setSelectAllEnable:;
- (Class)cellClass;
- (void)setTargetContentOffset:;
- (void).cxx_destruct;
- (id)targetContentOffset;
- (id)title;
- (void)setTitle:;
- (unsigned long long)listType;
- (void)setListType:;
- (void)setCellClass:;
@end
