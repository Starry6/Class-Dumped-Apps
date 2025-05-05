@interface IOHIDOutputTransactionClass : IOHIDTransactionClass
- (void)dealloc;
- (id)initWithDevice:;
- (int)getElementValue:value:options:;
- (int)queryInterface:outInterface:;
- (int)setElementValue:value:options:;
@end
