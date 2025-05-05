@interface IESECLiveLayoutMaker : NSObject
@property (nonatomic) NSDictionary nameToViewDic;
- (id)elementViewWithName:;
- (void)makeElementDesignWithModel:elementView:;
- (void)makeElementLayoutWithModel:elementView:;
- (void)makeLayoutWithDict:nameToViewDic:;
- (void)makeLayoutWithModel:nameToViewDic:;
- (void)makeLayoutWithModelArray:nameToViewDic:;
- (id)nameToViewDic;
- (double)p_constraintOffset:;
- (void)setNameToViewDic:;
- (void).cxx_destruct;
@end
