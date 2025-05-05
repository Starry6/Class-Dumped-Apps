@interface CNPropertyPhoneNumberEditingCell : CNPropertySimpleEditingCell
@property (nonatomic) NSArray previousValue;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)previousValue;
- (void)setPreviousValue:;
- (id)suggestionsForString:inputIndex:;
@end
