@interface AWESearchFeelGoodEntranceViewConfig : NSObject
@property (nonatomic) Q entranceType;
@property (nonatomic) @? tapActionBlock;
@property (nonatomic) @? clickContentBlock;
@property (nonatomic) @? submitActionBlock;
@property (nonatomic) AWESearchFeelGoodDataModel dataModel;
@property (nonatomic) BOOL isOnlySupportLightMode;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (unsigned long long)entranceType;
- (void)setEntranceType:;
- (BOOL)isOnlySupportLightMode;
- (void)setIsOnlySupportLightMode:;
- (void)setClickContentBlock:;
- (id)clickContentBlock;
- (id)submitActionBlock;
- (void)setSubmitActionBlock:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
@end
