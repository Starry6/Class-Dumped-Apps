@interface IESLiveInteractDynamicEmptyElementInfoModel : IESLiveInteractDynamicBaseElementInfoModel
@property (nonatomic) NSNumber visible;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString descColor;
@property (nonatomic) NSString emptyBgColor;
- (id)iconUrl;
- (id)descColor;
- (id)emptyBgColor;
- (void)setDescColor:;
- (void)setEmptyBgColor:;
- (void)setIconUrl:;
- (void)updateValueWithParams:;
- (id)visible;
- (void)setVisible:;
- (id)desc;
- (void)setDesc:;
- (void).cxx_destruct;
- (id)itemId;
@end
