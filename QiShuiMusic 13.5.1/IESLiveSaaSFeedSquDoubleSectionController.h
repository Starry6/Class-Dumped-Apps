@interface IESLiveSaaSFeedSquDoubleSectionController : IGListSectionController
@property (nonatomic) IESLiveSaaSFeedOperationModel data;
@property (nonatomic) IESLiveSaaSFeedCustomizedElementsModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)model;
- (id)init;
- (void)setModel:;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
- (id)sizeForItemAtIndex:;
@end
