@interface AWEDetailCommerceDescriptionSectionController : IGListSectionController
@property (nonatomic) <AWEDetailCommerceDescriptionViewConfiguration> configuration;
@property (nonatomic) AWEDetailCommerceDescriptionModel object;
@property (nonatomic) double descriptionContainerHeight;
@property (nonatomic) AWEDetailCommerceDescriptionView descriptionView;
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)descriptionContainerHeight;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (void)setDescriptionContainerHeight:;
- (void)commerceDescriptionView:heightChangedTo:animated:;
- (void)dealloc;
- (void)setProvider:;
- (void)setConfiguration:;
- (id)object;
- (void).cxx_destruct;
- (id)configuration;
- (id)provider;
- (id)initWithServiceProvider:;
- (void)setObject:;
- (id)inset;
- (id)descriptionView;
- (void)setDescriptionView:;
- (id)sizeForItemAtIndex:;
@end
