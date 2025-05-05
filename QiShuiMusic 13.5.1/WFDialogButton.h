@interface WFDialogButton : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) q style;
- (id)initWithTitle:style:;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (long long)style;
- (id)copyWithZone:;
- (id)initWithIdentifier:title:style:;
+ (BOOL)supportsSecureCoding;
+ (id)okButton;
+ (id)doneButton;
+ (id)cancelButton;
+ (id)startButton;
+ (id)selectButton;
+ (id)defaultButtonWithTitle:;
@end
