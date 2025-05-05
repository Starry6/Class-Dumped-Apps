@interface IESECReviewsDetailViewControllerConfiguration : NSObject
@property (nonatomic) NSString productID;
@property (nonatomic) NSNumber currentCommentID;
@property (nonatomic) IESECCommentShowDataManager dataManager;
@property (nonatomic) NSString entrance;
- (id)currentCommentID;
- (id)entrance;
- (void)setCurrentCommentID:;
- (void)setEntrance:;
- (id)productID;
- (void)setProductID:;
- (void)setDataManager:;
- (id)dataManager;
- (void).cxx_destruct;
- (id)initWithProductID:;
@end
