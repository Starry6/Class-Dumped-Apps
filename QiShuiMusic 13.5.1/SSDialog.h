@interface SSDialog : NSObject
@property (nonatomic) NSDictionary dialogDictionary;
@property (nonatomic) NSString dialogKind;
@property (nonatomic) NSString message;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray buttons;
@property (nonatomic) SSDialogButton defaultButton;
- (id)init;
- (void)dealloc;
- (void)setMessage:;
- (void)setTitle:;
- (id)buttons;
- (id)dialogKind;
- (id)valueForProperty:;
- (id)title;
- (void)_setValue:forProperty:;
- (id)message;
- (void)setButtons:;
- (id)dialogDictionary;
- (id)initWithDialogDictionary:;
- (id)defaultButton;
- (void)setDefaultButton:;
@end
