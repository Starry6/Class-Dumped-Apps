@interface AWESearchPlayerInteractorLeftTopContainerComponentModel : AWESearchComponentBasicModel
@property (nonatomic) NSArray type;
@property (nonatomic) Q componentType;
@property (nonatomic) AWESearchCustomTagComponentModel customTagModel;
@property (nonatomic) AWESearchCoverTagComponentModel coverTagModel;
@property (nonatomic) AWESearchPaidTagComponentModel paidTagModel;
- (id)customTagModel;
- (id)coverTagModel;
- (void)setPaidTagModel:;
- (void)setCoverTagModel:;
- (id)paidTagModel;
- (void)setCustomTagModel:;
- (unsigned long long)componentType;
- (id)type;
- (void)setType:;
- (void)setComponentType:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
