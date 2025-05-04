@interface AWEPOIDetailLynxCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEPOILynxContainerView lynxView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q scene;
- (void)willDisplaying;
- (id)lynxView;
- (void)setLynxView:;
- (void)updateCellWithModel:constData:index:;
- (id)p_getLynxDataFromModel:;
- (id)p_extraParamsWithModel:constData:;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (void)didEndDisplaying;
+ (double)cellHeightForModel:withWidth:;
@end
