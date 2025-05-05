@interface UIPasteConfiguration : NSObject
@property (nonatomic) NSArray acceptableTypes;
@property (nonatomic) NSArray acceptableTypeIdentifiers;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addAcceptableTypeIdentifiers:;
- (id)initWithTypeIdentifiersForAcceptingClass:;
- (void)addTypeIdentifiersForAcceptingClass:;
- (id)initWithAcceptableTypeIdentifiers:;
- (id)initWithAcceptableTypes:;
- (void)setAcceptableTypeIdentifiers:;
- (id)acceptableTypeIdentifiers;
- (void)setAcceptableTypes:;
- (id)acceptableTypes;
+ (BOOL)supportsSecureCoding;
+ (id)pasteConfigurationForAcceptingClasses:;
+ (id)_pasteConfigurationForAcceptingClasses:;
+ (id)pasteConfigurationWithAcceptableTypes:;
@end
