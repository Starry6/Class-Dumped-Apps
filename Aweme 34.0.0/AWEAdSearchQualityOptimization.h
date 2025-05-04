@interface AWEAdSearchQualityOptimization : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL shouldShowLongConvertButton;
@property (nonatomic) BOOL isAnchorStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShouldShowLongConvertButton:;
- (void)setIsAnchorStyle:;
- (BOOL)isAnchorStyle;
- (BOOL)shouldShowLongConvertButton;
- (BOOL)enable;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
