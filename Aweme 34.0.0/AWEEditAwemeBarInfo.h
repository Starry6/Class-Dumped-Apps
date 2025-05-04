@interface AWEEditAwemeBarInfo : MTLModel
@property (nonatomic) Q buttonStatus;
@property (nonatomic) NSString buttonToast;
@property (nonatomic) NSString barToast;
@property (nonatomic) Q editStatus;
@property (nonatomic) BOOL hasModifiedAll;
@property (nonatomic) NSNumber updateTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)buttonStatus;
- (void)setButtonStatus:;
- (id)buttonToast;
- (void)setButtonToast:;
- (id)barToast;
- (void)setBarToast:;
- (void)setEditStatus:;
- (BOOL)hasModifiedAll;
- (void)setHasModifiedAll:;
- (id)updateTime;
- (void).cxx_destruct;
- (void)setUpdateTime:;
- (unsigned long long)editStatus;
+ (id)JSONKeyPathsByPropertyKey;
@end
