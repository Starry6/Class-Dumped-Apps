@interface AWEIMRecorderImageRecognizeModel : NSObject
@property (nonatomic) NSDictionary textMapper;
@property (nonatomic) q state;
@property (nonatomic) NSString text;
@property (nonatomic) NSArray recognizeTags;
- (id)resultModel;
- (id)initWithState:text:;
- (id)__textWithState:;
- (id)recognizeTags;
- (id)textMapper;
- (id)initWithTextMapper:;
- (void)updateState:text:;
- (void)setRecognizeTags:;
- (void)setTextMapper:;
- (void)updateState:;
- (void)setText:;
- (void)updateTags:;
- (id)text;
- (long long)state;
- (void).cxx_destruct;
- (void)setState:;
@end
