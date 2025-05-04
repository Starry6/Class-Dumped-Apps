@interface AWEUserRecommendViewProvider : HTSService
@property (nonatomic) NSMutableDictionary cellViewClasses;
@property (nonatomic) NSMutableDictionary cardCellViewClasses;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)cardCellViewClassForType:;
- (void)registerCardCellViewClass:forType:;
- (Class)cellViewClassForType:;
- (void)registerCellViewClass:forType:;
- (id)cellViewClasses;
- (id)cardCellViewClasses;
- (void)setCellViewClasses:;
- (void)setCardCellViewClasses:;
- (id)init;
- (void).cxx_destruct;
- (Class)footerViewClass;
- (Class)headerViewClass;
@end
