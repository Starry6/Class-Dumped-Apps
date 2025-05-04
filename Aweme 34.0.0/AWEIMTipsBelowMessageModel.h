@interface AWEIMTipsBelowMessageModel : AWEBaseApiModel
@property (nonatomic) NSString scene;
@property (nonatomic) NSString tips;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSArray visibleUIDs;
@property (nonatomic) NSArray inVisibleUIDs;
- (id)visibleUIDs;
- (id)inVisibleUIDs;
- (void)setVisibleUIDs:;
- (void)setInVisibleUIDs:;
- (void)setScene:;
- (id)scene;
- (id)tips;
- (void).cxx_destruct;
- (BOOL)hasIcon;
- (void)setTips:;
- (void)setHasIcon:;
+ (id)generateModelForMessage:scene:;
+ (BOOL)canShowTips:scene:;
+ (id)JSONKeyPathsByPropertyKey;
@end
