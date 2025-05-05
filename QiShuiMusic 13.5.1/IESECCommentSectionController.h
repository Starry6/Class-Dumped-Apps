@interface IESECCommentSectionController : IGListSectionController
@property (nonatomic) IESECCommentDataController dataController;
@property (nonatomic) IESECGoodsCommentContext context;
@property (nonatomic) IESECCommentBizTracker bizTracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizTracker;
- (id)sectionLayout;
- (void)setBizTracker:;
- (void)setDataController:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (id)dataController;
@end
