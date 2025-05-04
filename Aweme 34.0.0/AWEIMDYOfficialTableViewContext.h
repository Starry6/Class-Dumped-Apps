@interface AWEIMDYOfficialTableViewContext : NSObject
@property (nonatomic) q modelCount;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) q demoteState;
@property (nonatomic) NSString noticeName;
@property (nonatomic) BOOL isAllCategory;
- (id)noticeName;
- (void)setNoticeName:;
- (void)setModelCount:;
- (long long)demoteState;
- (void)setDemoteState:;
- (id)initWithIndexPath:modelCount:demoteState:noticeName:;
- (void)setIsAllCategory:;
- (id)initWithIndexPath:modelCount:demoteState:noticeName:isAllCategory:;
- (BOOL)isAllCategory;
- (id)indexPath;
- (void)setIndexPath:;
- (void).cxx_destruct;
- (long long)modelCount;
@end
