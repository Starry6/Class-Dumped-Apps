@interface AWEVisionTagManager : NSObject
@property (nonatomic) @? primaryActionBlock;
@property (nonatomic) @? secondaryActionBlock;
- (id)showVisionTagLongPressPanelPrimaryActionBlock:secondaryActionBlock:;
- (void)setPrimaryActionBlock:;
- (void)setSecondaryActionBlock:;
- (id)primaryActionBlock;
- (id)secondaryActionBlock;
- (void).cxx_destruct;
- (void)primaryButtonClicked;
- (void)secondaryButtonClicked;
+ (id)getSearchStickerModelWithVtagDefaultData:;
+ (id)getSearchFromWithTagSpace:tagUid:;
+ (id)getTagCategoryWithTagSpace:;
@end
