@interface AWEIMRecommendGroupRequestService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fetchRecommendItemDatas;
- (id)fetchApplyRecommendGroupVerifyInfoWithChatModel:;
- (id)requestUpdateRecommendGroupStatusWithParams:;
@end
