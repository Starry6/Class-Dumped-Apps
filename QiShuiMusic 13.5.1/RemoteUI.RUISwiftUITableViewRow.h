@interface RemoteUI.RUISwiftUITableViewRow : RUITableViewRow
@property (nonatomic) RUIXMLElement xmlElement;
@property (nonatomic) BOOL selected;
- (id)init;
- (void)setSelected:;
- (BOOL)isSelected;
- (id)tableCell;
- (void).cxx_destruct;
- (void)populatePostbackDictionary:;
- (id)initWithAttributes:parent:;
- (void)didBecomeSelected;
- (void)didBecomeDeselected;
- (id)xmlElement;
- (void)setXmlElement:;
@end
