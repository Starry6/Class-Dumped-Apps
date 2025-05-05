@interface CNUIToolbarItem : NSObject
@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) NSString title;
@property (nonatomic) @? actionBlock;
- (BOOL)isDefault;
- (id)actionBlock;
- (void)setTitle:;
- (void)setIsDefault:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isCancel;
- (void)setIsCancel:;
- (void)setActionBlock:;
@end
