@interface IESLivePublicScreenNormalLayoutCalculator : NSObject
@property (nonatomic) <IESLivePublicScreenLayoutCalculateDataProvider> provider;
@property (nonatomic) IESLivePublicScreenLayoutInfoModel infoModel;
@property (nonatomic) BOOL disableCalculate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)calculateAvoidHeightWithConstHeight:;
- (double)calculateMessageListHeightWithConstHeight:;
- (void)calculatePublicScreenLayout;
- (void)calculateRealMessageListHeight;
- (BOOL)disableCalculate;
- (double)getSafeHeight:;
- (BOOL)hitedMaxProtectHeight;
- (BOOL)hitedMinProtectHeight;
- (id)infoModel;
- (void)removePublicScreenOutSetWidth;
- (void)setDisableCalculate:;
- (void)setInfoModel:;
- (void)updatePublicScreenHeightWithReason:;
- (void)updatePublicScreenHeightWithScene:;
- (void)updatePublicScreenWidth:withSource:;
- (void)setProvider:;
- (id)init;
- (double)bottomPadding;
- (id)provider;
- (void).cxx_destruct;
@end
