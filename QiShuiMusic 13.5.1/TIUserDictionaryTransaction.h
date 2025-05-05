@interface TIUserDictionaryTransaction : NSObject
@property (nonatomic) TIUserDictionaryEntryValue valueToDelete;
@property (nonatomic) TIUserDictionaryEntryValue valueToInsert;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)valueToDelete;
- (void)setValueToDelete:;
- (id)valueToInsert;
- (void)setValueToInsert:;
+ (BOOL)supportsSecureCoding;
@end
