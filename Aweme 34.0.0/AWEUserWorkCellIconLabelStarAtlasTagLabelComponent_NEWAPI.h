@interface AWEUserWorkCellIconLabelStarAtlasTagLabelComponent_NEWAPI : AWEUserWorkCellBaseComponent
@property (nonatomic) AWERLVirtualView virtualView;
@property (nonatomic) AWERLVirtualImageView iconViewVirtualView;
@property (nonatomic) AWERLVirtualLabel countLabelVirtualView;
@property (nonatomic) AWERLVirtualView starAtlasTagLabelVirtualView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildVirtualView:;
- (double)iconViewWidth;
- (void)setVirtualView:;
- (void)changeAlpha:;
- (id)countLabelVirtualView;
- (id)iconViewVirtualView;
- (id)starAtlasTagLabelVirtualView;
- (id)iconImageSize:;
- (void)setIconViewVirtualView:;
- (void)setCountLabelVirtualView:;
- (void)setStarAtlasTagLabelVirtualView:;
- (void).cxx_destruct;
- (id)initWithData:context:;
- (id)virtualView;
+ (id)componentWithData:context:;
@end
