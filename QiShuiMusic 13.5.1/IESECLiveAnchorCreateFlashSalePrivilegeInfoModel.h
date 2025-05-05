@interface IESECLiveAnchorCreateFlashSalePrivilegeInfoModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString code;
@property (nonatomic) NSString subMsg;
@property (nonatomic) BOOL canOperate;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) NSString operateDisableMsg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canOperate;
- (id)operateDisableMsg;
- (void)setCanOperate:;
- (void)setOperateDisableMsg:;
- (void)setSubMsg:;
- (id)subMsg;
- (void)setName:;
- (id)code;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (id)name;
- (void)setCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
