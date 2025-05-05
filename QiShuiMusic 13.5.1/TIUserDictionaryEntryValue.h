@interface TIUserDictionaryEntryValue : NSObject
@property (nonatomic) NSString phrase;
@property (nonatomic) NSString shortcut;
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)phrase;
- (void)setPhrase:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (id)timestamp;
- (id)description;
- (void)setShortcut:;
- (id)shortcut;
- (BOOL)matchesEntry:;
- (id)shortcutForSorting;
+ (BOOL)supportsSecureCoding;
+ (id)valueWithEntry:;
@end
