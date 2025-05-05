@interface DOMProcessingInstruction : DOMCharacterData
@property (nonatomic) NSString target;
@property (nonatomic) DOMStyleSheet sheet;
- (id)target;
- (id)sheet;
@end
