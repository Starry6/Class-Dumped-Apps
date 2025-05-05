@interface SFAppAutoShortcutsButtonItem : SFButtonItem
@property (nonatomic) SFAppAutoShortcutsItem appAutoShortcutsItem;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q uniqueId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)appAutoShortcutsItem;
- (void)setAppAutoShortcutsItem:;
+ (BOOL)supportsSecureCoding;
@end
