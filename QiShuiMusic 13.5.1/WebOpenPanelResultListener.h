@interface WebOpenPanelResultListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)chooseFilenames:displayString:iconImage:;
- (void)chooseFilename:displayString:iconImage:;
- (void)chooseFilename:;
- (void)chooseFilenames:;
- (id)initWithChooser:;
@end
