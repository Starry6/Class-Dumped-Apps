@interface AWEECOMIMTextActionButtonModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) BOOL disable;
@property (nonatomic) NSString actionTypeString;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString tips;
@property (nonatomic) BOOL hasNoPermisssion;
@property (nonatomic) @? buttonActionBlock;
- (void)setExtra:;
- (void)setDisable:;
- (void)setActionTypeString:;
- (void)setHasNoPermisssion:;
- (id)actionTypeString;
- (BOOL)hasNoPermisssion;
- (BOOL)disable;
- (id)extra;
- (id)tips;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setTips:;
- (id)buttonActionBlock;
- (void)setButtonActionBlock:;
@end
