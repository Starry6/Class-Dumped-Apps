@interface DOMTokenList : DOMObject
@property (nonatomic) I length;
@property (nonatomic) NSString value;
- (void)dealloc;
- (void)setValue:;
- (id)value;
- (unsigned int)length;
- (BOOL)contains:;
- (id)item:;
- (BOOL)toggle:force:;
@end
