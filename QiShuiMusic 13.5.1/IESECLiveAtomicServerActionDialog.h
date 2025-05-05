@interface IESECLiveAtomicServerActionDialog : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) IESECLiveDialogContentElement content;
@property (nonatomic) IESECLiveDialogButtonElement confirmButton;
@property (nonatomic) IESECLiveDialogButtonElement cancelButton;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary eventParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEventParams:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (void)setCancelButton:;
- (id)cancelButton;
- (id)confirmButton;
- (void)setConfirmButton:;
- (id)eventParams;
+ (id)JSONKeyPathsByPropertyKey;
@end
