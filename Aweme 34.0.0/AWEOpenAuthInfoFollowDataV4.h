@interface AWEOpenAuthInfoFollowDataV4 : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString toUserId;
@property (nonatomic) NSString desc;
@property (nonatomic) BOOL showSelection;
@property (nonatomic) BOOL defaultSelect;
- (id)toUserId;
- (void)setToUserId:;
- (BOOL)defaultSelect;
- (void)setDefaultSelect:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (BOOL)showSelection;
- (void)setShowSelection:;
+ (id)JSONKeyPathsByPropertyKey;
@end
