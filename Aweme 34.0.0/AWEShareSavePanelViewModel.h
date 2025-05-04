@interface AWEShareSavePanelViewModel : NSObject
@property (nonatomic) double height;
@property (nonatomic) AWEShareSaveAlertViewModel model;
@property (nonatomic) NSString title;
@property (nonatomic) NSAttributedString attMessage;
@property (nonatomic) {CGSize=dd} messageSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attMessage;
- (id)initWithModel:hasIMUser:;
- (void)setAttMessage:;
- (void)setModel:;
- (void)setHeight:;
- (id)messageSize;
- (void)setMessageSize:;
- (id)model;
- (void).cxx_destruct;
- (id)title;
- (double)height;
- (void)setTitle:;
@end
