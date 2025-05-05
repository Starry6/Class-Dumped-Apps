@interface DOMText : DOMCharacterData
@property (nonatomic) NSString wholeText;
- (id)splitText:;
- (id)wholeText;
- (id)replaceWholeText:;
@end
