@interface IESPrefetchDebugTemplateViewController : UIViewController
@property (nonatomic) NSString business;
@property (nonatomic) UITextView textView;
@property (nonatomic) <IESPrefetchConfigTemplate> configTemplate;
@property (nonatomic) BOOL editable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didDone;
- (void)addKeyboardObserver;
- (id)configTemplate;
- (void)setConfigTemplate:;
- (void)scrollViewDidEndDecelerating:;
- (id)textView;
- (void)dealloc;
- (void)setTextView:;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setEditable:;
- (BOOL)editable;
- (id)business;
- (void)setBusiness:;
- (id)initWithBusiness:;
- (void)setupTextView;
@end
