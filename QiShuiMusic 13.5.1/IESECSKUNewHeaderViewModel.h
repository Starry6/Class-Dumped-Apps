@interface IESECSKUNewHeaderViewModel : NSObject
@property (nonatomic) IESECSKUSpecViewModel specViewModel;
@property (nonatomic) IESECSKUSizeAssistantComponent sizeAssistant;
@property (nonatomic) IESECSKUCarAdaptViewModel carAdapterViewModel;
@property (nonatomic) q specImageType;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) q index;
- (id)carAdapterViewModel;
- (void)setCarAdapterViewModel:;
- (void)setSizeAssistant:;
- (void)setSpecImageType:;
- (void)setSpecViewModel:;
- (id)sizeAssistant;
- (long long)specImageType;
- (id)specViewModel;
- (long long)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)contentSize;
- (void)setContentSize:;
@end
