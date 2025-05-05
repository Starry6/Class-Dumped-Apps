@interface DOMAbstractView : DOMObject
@property (nonatomic) DOMDocument document;
- (void)dealloc;
- (id)document;
- (void)_disconnectFrame;
@end
