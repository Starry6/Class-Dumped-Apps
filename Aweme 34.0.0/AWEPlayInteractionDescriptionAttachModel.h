@interface AWEPlayInteractionDescriptionAttachModel : NSObject
@property (nonatomic) @ content;
@property (nonatomic) q contentMode;
@property (nonatomic) {CGSize=dd} attachmentSize;
@property (nonatomic) UIFont alignFont;
@property (nonatomic) q alignment;
@property (nonatomic) NSString accessibilityString;
- (void)setAlignFont:;
- (id)alignFont;
- (id)content;
- (void)setAlignment:;
- (void)setContent:;
- (void).cxx_destruct;
- (long long)alignment;
- (long long)contentMode;
- (void)setContentMode:;
- (id)accessibilityString;
- (void)setAccessibilityString:;
- (id)attachmentSize;
- (void)setAttachmentSize:;
+ (id)attachmentModelWithContent:contentMode:attachmentSize:alignToFont:alignment:;
@end
