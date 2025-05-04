@interface AWEIMPushGuideV4Selection : MTLModel
@property (nonatomic) NSString selectionType;
@property (nonatomic) NSString selectionTitle;
@property (nonatomic) NSString iconUrlString;
@property (nonatomic) NSString confirmButtonText;
@property (nonatomic) NSArray actions;
@property (nonatomic) BOOL selected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setConfirmButtonText:;
- (id)iconUrlString;
- (void)setIconUrlString:;
- (id)actions;
- (void)setSelectionType:;
- (void).cxx_destruct;
- (void)setSelectionTitle:;
- (BOOL)selected;
- (void)setActions:;
- (id)selectionTitle;
- (void)setSelected:;
- (id)selectionType;
- (id)confirmButtonText;
+ (id)JSONKeyPathsByPropertyKey;
@end
