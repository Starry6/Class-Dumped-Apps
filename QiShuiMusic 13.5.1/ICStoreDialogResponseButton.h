@interface ICStoreDialogResponseButton : NSObject
@property (nonatomic) q type;
@property (nonatomic) BOOL isDefaultButton;
@property (nonatomic) NSString title;
@property (nonatomic) ICStoreDialogResponseButtonAction action;
- (id)action;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithType:isDefaultButton:title:action:;
- (BOOL)isDefaultButton;
@end
