@interface AWEUserSpecialStateModel : AWEBaseApiModel
@property (nonatomic) Q specialStateType;
@property (nonatomic) NSString specialStateTitle;
@property (nonatomic) NSString specialStateContent;
- (unsigned long long)specialStateType;
- (void)setSpecialStateType:;
- (id)specialStateTitle;
- (void)setSpecialStateTitle:;
- (id)specialStateContent;
- (void)setSpecialStateContent:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
