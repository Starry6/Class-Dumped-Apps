@interface DOMStyleSheet : DOMObject
@property (nonatomic) NSString type;
@property (nonatomic) BOOL disabled;
@property (nonatomic) DOMNode ownerNode;
@property (nonatomic) DOMStyleSheet parentStyleSheet;
@property (nonatomic) NSString href;
@property (nonatomic) NSString title;
@property (nonatomic) DOMMediaList media;
- (id)href;
- (void)setDisabled:;
- (void)dealloc;
- (BOOL)disabled;
- (id)type;
- (id)title;
- (id)media;
- (id)parentStyleSheet;
- (id)ownerNode;
@end
